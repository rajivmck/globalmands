#set :branch, "master"
set :rails_env, 'QA'
# files folder on machine eg: /srv/www-files/APPLICATION_NAME_qa
set :www_files_folder, "/srv/www-files/globalmands_qa"
# deploy_to eg: /srv/travelsecurityqa.intranet.mckinsey.com
set :deploy_to, "/srv/globalmandsqa.intranet.mckinsey.com"
# user eg: travelsecurity
set :user, "globalmands"

# you may not need to change below infromation
set :domain, "qa-medias-lx01.amdc.mckinsey.com"
set :domain2, "qa-medias-lx02.amdc.mckinsey.com"
server "#{domain}", :app, :web, primary: true
server "#{domain2}", :app, :web
