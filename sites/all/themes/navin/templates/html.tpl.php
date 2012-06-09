<?php print $doctype; ?>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
<head<?php print $rdf->profile; ?>>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>  
  <?php print $styles; ?>
 <script src="/SpryAssets/SpryAccordion.js" type="text/javascript"></script>
 <script src="/SpryAssets/js/jquery-1.7.2.min.js" type="text/javascript"></script>
 <script src="/SpryAssets/js/jquery-ui-1.8.21.custom.min.js" type="text/javascript"></script>
<link href="/SpryAssets/SpryAccordion.css" rel="stylesheet" type="text/css" />
  <?php print $scripts; ?>
  <!--[if lt IE 9]><script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->
</head>
<body<?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>