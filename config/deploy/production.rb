#set :branch, "master"
set :rails_env, 'Production'
# files folder on machine eg: /srv/www-files/APPLICATION_NAME_prod
set :www_files_folder, "/srv/www-files/globalmands_prod"
# deploy_to eg: /srv/travelsecurity.intranet.mckinsey.com
set :deploy_to, "/srv/globalmands.intranet.mckinsey.com"
# user eg: travelsecurity
set :user, "globalmands"

# you may not need to change below infromation
set :domain, "amdc-medias-lx01.amdc.mckinsey.com"
set :domain2, "amdc-medias-lx02.amdc.mckinsey.com"
server "#{domain}", :app, :web, primary: true
server "#{domain2}", :app, :web
