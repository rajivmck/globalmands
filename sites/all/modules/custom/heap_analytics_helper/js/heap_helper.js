(function($) {
    jQuery(document).ready(function($) {
        var json = Drupal.settings.heap_analytics_helper.heapData;
        var fmno = json["data"]["fmno"];
        var name = json["data"]["first_name"] + ' ' + json["data"]["last_name"];
        var email = json["data"]["email"];
        var role = json["data"]["role"];
        var role_cat = json["data"]["mc_role_cat"];
        var role_sub_cat = json["data"]["mc_role_subcat"];
        var office_code = json["data"]["office_code"];
        var office_city = json["data"]["city"];
        var country = json["data"]["countryName"];
        var region = json["data"]["regionName"];  
         window.heap = window.heap||[],heap.load=function(e,t){window.heap.appid=e,window.heap.config=t=t||{};var r=t.forceSSL||"https:"===document.location.protocol,a=document.createElement("script");a.type="text/javascript",a.async=!0,a.src=(r?"https:":"http:")+"//cdn.heapanalytics.com/js/heap-"+e+".js";var n=document.getElementsByTagName("script")[0];n.parentNode.insertBefore(a,n);for(var o=function(e){return function(){heap.push([e].concat(Array.prototype.slice.call(arguments,0)))}},p=["addEventProperties","addUserProperties","clearEventProperties","identify","removeEventProperty","setEventProperties","track","unsetEventProperty"],c=0;c<p.length;c++)heap[p[c]]=o(p[c])};     
        var heapObject = {
            forceSSL: json["heapStorage"]["forceSSL"],
            secureCookie: json["heapStorage"]["secureCookie"],
            disableTextCapture: json["heapStorage"]["dtc"]
        };
        /*Adding this new Field to Heap object to store cookie path if there*/
        if ($.trim(json["heapStorage"]["cookiePath"])) {
            heapObject.cookiePath = json["heapStorage"]["cookiePath"];
        }
        heap.load(json['id'], heapObject);
        heap.identify(fmno);
        heap.addUserProperties({
        'mck-name': name, 
        'mck-email': email, 
        'mck-role': role, 
        'mck-role-cat': role_cat, 
        'mck-role-subcat': role_sub_cat, 
        'mck-office-code': office_code, 
        'mck-office-city': office_city, 
        'mck-office-country': country, 
        'mck-office-region': region, });
    });
})(jQuery);
