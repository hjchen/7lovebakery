<?php
/**
 * @file
 * Return the basic html structure of a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728208
 */
?><!DOCTYPE html>
<!--[if lt IE 9]><script src="<?= base_path().path_to_theme(); ?>/js/html5shiv.js"></script><![endif]-->
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>>

<head>
  <?php print $head; ?>
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <script>
    (function(f,b,g){
      var xo=g.prototype.open,xs=g.prototype.send,c;
      f.hj=f.hj||function(){(f.hj.q=f.hj.q||[]).push(arguments)};
      f._hjSettings={hjid:11385, hjsv:2};
      function ls(){f.hj.documentHtml=b.documentElement.outerHTML;c=b.createElement("script");c.async=1;c.src="//static.hotjar.com/c/hotjar-11385.js?sv=2";b.getElementsByTagName("head")[0].appendChild(c);}
      if(b.readyState==="interactive"||b.readyState==="complete"||b.readyState==="loaded"){ls();}else{if(b.addEventListener){b.addEventListener("DOMContentLoaded",ls,false);}}
      if(!f._hjPlayback && b.addEventListener){
        g.prototype.open=function(l,j,m,h,k){this._u=j;xo.call(this,l,j,m,h,k)};
        g.prototype.send=function(e){var j=this;function h(){if(j.readyState===4){f.hj("_xhr",j._u,j.status,j.response)}}this.addEventListener("readystatechange",h,false);xs.call(this,e)};
      }
    })(window,document,window.XMLHttpRequest);
</script>
</head>

<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
