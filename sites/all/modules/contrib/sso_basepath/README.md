

-- Enable this module


-- Go to admin/config/sso_basepath and add some configuration


-- Open include/common.inc file


-- Search for "base_path()" function in common.inc file and replace whole funtion with below code


    function base_path() {
        if(function_exists('sso_basepath_sso_or_not')) {
            if(sso_basepath_sso_or_not()){
                $base_path = variable_get('sso_config_base_path');
                return $base_path;
            }
        }
        return $GLOBALS['base_path'];
    }


-- Also make changes in url function in common.inc file

find for 
    base = $options['absolute'] ? $options['base_url'] . '/' : base_path();

And replace with

    if(function_exists('sso_basepath_sso_or_not') && sso_basepath_sso_or_not() === TRUE) {
        $var_base = variable_get('sso_config_base_path');
        $var_domain = variable_get('sso_config_domain');
        $sso_base_url = $var_domain . substr($var_base, 0, -1);
        $base_path = $sso_base_url . '/';
    } else {
        $sso_base_url = $options['base_url'];
        $base_path = base_path();
    }

    $base = $options['absolute'] ? $sso_base_url . '/' : $base_path;


-- Thats it ajax and other stuff should start working