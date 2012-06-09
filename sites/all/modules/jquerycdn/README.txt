/**
 * @file README.txt
 */ 

CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Installation
 * Credits

INTRODUCTION
------------

jQuery CDN module upgrades Drupal's internal version of jQuery with one
hosted on an external CDN.

Why would you want to do this?

Decrease load on hosted servers
- - - - - - - - - - - - - - - - 
If your host your site on a server that charges per data download or if that
host has a limit on data served then offsetting a large chunk of data to an
alternative site can save your money.

But there's also the following reasons. 

/* Copied verbose from:
 * http://encosia.com/2008/12/10/3-reasons-why-you-should-let-google-host-jquery-for-you/
 */
 
Decreased Latency
- - - - - - - - -
A CDN - short for Content Delivery Network - distributes your static content
across servers in various, diverse physical locations. When a user's browser
resolves the URL for these files, their download will automatically target the
closest available server in the network.

In the case of Google's AJAX Libraries CDN, what this means is that any users
not physically near your server will be able to download jQuery faster than if
you force them to download it from your arbitrarily located server.

There are a handful of CDN services comparable to Google's, but it's hard to
beat the price of free! This benefit alone could decide the issue, but there's
even more. 
 
Increased parallelism
- - - - - - - - - - -
To avoid needlessly overloading servers, browsers limit the number of
connections that can be made simultaneously. Depending on which browser,
this limit may be as low as two connections per hostname.

Using the Google AJAX Libraries CDN eliminates one request to your site,
allowing more of your local content to downloaded in parallel. It doesn't make
a gigantic difference for users with a six concurrent connection browser, but
for those still running a browser that only allows two, the difference is
noticeable.

Better caching*
- - - - - - - -
Potentially the greatest benefit of using the Google AJAX Libraries CDN is
that your users may not need to download jQuery at all.

No matter how well optimized your site is, if you're hosting jQuery locally
then your users must download it at least once. Each of your users probably
already has dozens of identical copies of jQuery in their browser's cache,
but those copies of jQuery are ignored when they visit your site.

However, when a browser sees references to CDN-hosted copies of jQuery, it
understands that all of those references do refer to the exact same file.
With all of these CDN references point to exactly the same URLs, the browser
can trust that those files truly are identical and won't waste time
re-requesting the file if it's already cached. Thus, the browser is able to
use a single copy that's cached on-disk, regardless of which site the CDN
references appear on.

This creates a potent "cross-site caching" effect which all sites using the CDN
benefit from. Since Google's CDN serves the file with headers that attempt to
cache the file for up to one year, this effect truly has amazing potential.
With many thousands of the most trafficked sites on the Internet already using
the Google CDN to serve jQuery, it's quite possible that many of your users
will never make a single HTTP request for jQuery when they visit sites using
the CDN.

Even if someone visits hundreds of sites using the same Google hosted version
of jQuery, they will only need download it once!

INSTALLATION
------------

1. Copy the jquery_cdn folder to your sites/all/modules or
   sites/{YOURSITENAME}/modules folder.

2. Enable the module at Administer >> Site building >> Modules.

CREDITS
-------

* Vino Rodrigues (vinorodrigues)
* Idea inspired from jQuery Update - http://http://drupal.org/project/jquery_update 
* Idea inspired from http://encosia.com
* jQuery CDN list from http://docs.jquery.com/Downloading_jQuery#CDN_Hosted_jQuery
* jQuery UI CDN list from http://blog.jqueryui.com/2011/02/jquery-ui-1-8-10/ 
* Dynamic always latest version from Google - a trick I found out some time ago.
