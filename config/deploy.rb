# define stages
set :stages, ["production", "qa", "integration"]
set :default_stage, "integration"


# APPLICATION NAME IS MUST PLEASE FILL THIS
# eg: "TravelSecurity"
set :application, "GlobalMandS" 


set(:releases_path)     { File.join(deploy_to, version_dir) }
set(:shared_path)       { File.join(deploy_to, shared_dir) }
set(:current_path)      { File.join(deploy_to, current_dir) }
set(:release_path)      { File.join(releases_path, release_name) }


# Git and system related configuration related configuration
set :scm, :git
# git repo eg: git://githuben.intranet.mckinsey.com/USER/PROJECT.git
set :repository, "http://githuben.intranet.mckinsey.com/svc-srv-mediaservice/globalmands.git"
set :branch, "master"
set :copy_exclude, [".git", ".git/*", ".gitignore"]
set :deploy_via, :remote_cache 
default_run_options[:pty] = true
set :use_sudo, false
set :scm_verbose, true











=begin

YOU MAY NOT NEED TO CHANGE ANYTHING BELOW THIS LINE, BUT GO AHEAD IF YOU KNOW WHAT YOU ARE DOING!

=end




# All tasks will run on every deployment written under these namespaces
after :deploy do
  # Create symlinks etc...
  drupal_every_deploy.drupal_every_deploy_grouping
  # finalizing...
  drupal_finalize.drupal_finalize_grouping
end



# Custom commands
# cap INSTANCE deploy:install
namespace :deploy do
  desc "Configure apache for the new application by making a vhost entry. Also creating settings.php"
  task :install, :once => true do
    transaction do
      drupal_apache.configure
      drupal_first_time.create_settings_file
    end
  end
end



# Drupal settings on each deploy
namespace :drupal_every_deploy do

  task :drupal_every_deploy_grouping do
    drupal_every_deploy.symlink_settings_file
    drupal_every_deploy.symlink_files_folder
  end 

  # Lets create a empty settings.php in sites/default and symlink it with the current/sites/default
  task :symlink_settings_file do
    puts "\n\n=== Creating settings.php in app setup and symlink it with saved in shared ===\n\n"
    run "ln -s #{shared_path}/settings.php #{release_path}/sites/default/settings.php"
  end

  # create files folder and symlink it with www files
  task :symlink_files_folder do
    puts "\n\n=== Creating files folder in app setup and symlink it with www files folder ===\n\n"
    run "ln -s #{www_files_folder} #{release_path}/sites/default/files"
  end

end




# finalize drupal installation
namespace :drupal_finalize do

  # grouping all the task
  task :drupal_finalize_grouping do
    drupal_finalize.check_give_permissions
    drupal_finalize.success_message
  end

  task :check_give_permissions, :on_error => :continue do
    puts "\n\n=== Giving permissions to settings.php ===\n\n"
    run "chmod go-w #{release_path}/sites/default/settings.php"
  end

  desc "Put success message at the end"
  task :success_message do
    run "echo 'Drupal Deployments Successfully Completed'"
  end

end




# Configuration only for first time
namespace :drupal_first_time do

  # Create setttings.php file
  desc "Lets set settings.php first"
  task :create_settings_file do
    puts "\n\n=== Creating settings.php file with CLI input, and saving in shared folder ===\n\n"
    set(:settings_db_prefix) { Capistrano::CLI.ui.ask "Database prefix if any (eg: _mysitename) => " }
    set(:settings_db_password) { Capistrano::CLI.password_prompt "Database Password => " }
    set(:settings_db_user) { Capistrano::CLI.ui.ask "Database User => " }
    set(:settings_db_name) { Capistrano::CLI.ui.ask "Database Name => " }
    set(:settings_db_host) { Capistrano::CLI.ui.ask "Database Host => " }
    settings_file = template_file('settings.php')
    put settings_file, "#{shared_path}/settings.php"
  end

end



# Make vhost entry in apache with server team input
namespace :drupal_apache do
  task :configure, :roles => :app do
    puts "\n\n=== Config vhost file for the '#{application}' app ===\n\n"
    set(:server_name) { Capistrano::CLI.ui.ask("ServerName ? (eg example[int/qa/prod].intranet.mckinsey.com) => ") }
    set(:server_alias) { Capistrano::CLI.ui.ask("ServerAlias ? => ") }
    vhost_file = template_file('apache.conf')
    put vhost_file, "#{shared_path}/vhost_file"
    run "cp #{shared_path}/vhost_file /etc/apache2/vhosts.d/#{server_name}.conf"
  end
end



# Get true or false if path exist on remote server
def remote_file_exists?(full_path)
 'true' == capture("if [ -e #{full_path} ]; then echo 'true'; fi").strip
end

# read template files
def template_file(template)
  temp_file = File.join(File.expand_path(File.dirname(__FILE__)), 'templates', template)
  return ERB.new(File.read(temp_file), nil, "-").result(binding)
end



# set how many releases you want to keep and clean up the deployment
set :keep_releases, 3
after "deploy:restart", "deploy:cleanup"
