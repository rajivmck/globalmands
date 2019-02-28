#set :branch, "master"
set :rails_env, 'Integration'
# files folder on machine eg: /srv/www-files/APPLICATION_NAME_int
set :www_files_folder, "/srv/www-files/globalmands_int"
# deploy_to eg: /srv/travelsecurityint.intranet.mckinsey.com
set :deploy_to, "/srv/globalmandsint.intranet.mckinsey.com"
# user eg: travelsecurity
set :user, "globalmands"

# you may not need to change below infromation
set :domain, "dev-medias-lx01.amdc.mckinsey.com"
set :domain2, "dev-medias-lx02.amdc.mckinsey.com"
server "#{domain}", :app, :web, primary: true
server "#{domain2}", :app, :web
