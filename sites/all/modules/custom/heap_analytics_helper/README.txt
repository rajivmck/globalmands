CONTENTS OF THIS FILE
---------------------
   
 * Introduction
 * Requirements
 * Installation
 * Configuration 

INTRODUCTION
---------------------

Module to override heap_analytics contrib. Add more properties for tracking.
Check https://heapanalytics.com/ for more info about heapanalytics.

This module also uses personsV3Search and geoOffices API's for fetching users 
data and feeding in to heapanalytics.

REQUIREMENTS
---------------------

* Heap Analytics module. Can download from https://www.drupal.org/project/heap_analytics
* Heap Analytics user account that you get on their website heapanalytics.com

INSTALLATION
---------------------

Install as you would normally install a Druapl module.
Visit: https://www.drupal.org/docs/7/extend/installing-modules for further informtaion.

CONFIGURATION
---------------------

1. Go to /admin/config/heap-analytics/configuration

* Fill in the Force SSL field with "true" if want to force SSL for tracking.
* Fill in the Secure Cookie field with "true" if want to set secure cookie for tracking. 
Read more on https://docs.heapanalytics.com/docs/advanced-configuration
* Fill in the Disable Text Capture field with "false" if you want to prevent 
heap.js from capturing the text content of elements. Read more https://docs.heapanalytics.com/docs/advanced-configuration#section-disabletextcapture
* Set the path at which you want to generate the heap analytics cookies. If 
nothing is saved for this field then cookie would be saved at "/" by default.

2. API Exchange configurations:

* Go to /admin/config/apiexchange/configuration
* Fill in the API Key and API URL.

3. Configure API Auth settings:

* Go to /admin/config/apiexchange/oauth.
* Set your api auth configuration.