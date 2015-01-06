<?php
/**
 * @file
 * sevenlove_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function sevenlove_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Homepage text - custom';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'homepage_custom';
  $fe_block_boxes->body = '<h2>Custom designed celebration cakes</h2><p>Need an idea for the perfect gift? Why not customise a cake unique to your loved one or special occasion? Just provide me a picture or photo of the theme or design you have in mind and I&#39;ll take care of the rest.</p>';

  $export['homepage_custom'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Homepage text - standard';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'homepage_standard';
  $fe_block_boxes->body = '<h2>Hand-made cakes and sweet treats</h2><p>Make someone&#39;s day better with a cake that tastes as good as it looks. All my cakes are lovingly baked from scratch, made fresh to order and contain no preservatives. I specialise in made-to-order cakes, cupcakes and confectionaries for all types of occasions. Or simply because you don&#39;t need a reason to enjoy cake.</p>';

  $export['homepage_standard'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Copyright';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'site_copyright';
  $fe_block_boxes->body = '<p><small>&copy; <script type="text/javascript">document.write(new Date().getFullYear());</script> 7Love Bakery All Rights Reserved</small></p>';

  $export['site_copyright'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'site_footer';
  $fe_block_boxes->body = '<div class="footer-content footer-about">
  <label>About 7Love Bakery</label>
  <p>I specialise in hand-made custom cakes and cupcakes. All my cakes are made to order just for you. Interested? <a href="contact">Contact me</a> to discuss your order.</p>
</div>

<div class="footer-content footer-contacts">
  <label>Contacts</label>
  <ul class="contacts">
    <li class="wechat">Wechat: ast_0331</li>
    <li class="line">LINE: prettyang</li>
    <li class="email">Email: <a href="mailto:ast_1119@hotmail.com">ast_1119@hotmail.com</a></li>
  </ul>
</div>

<div class="footer-content footer-pickup">
  <label>Pickup locations</label>
  <ul class="pickup">
    <li class="leisuremall"><a target="_blank" href="http://www.cherasleisuremall.com.my/contact.php">Cheras Leisure Mall (map)</a></li>
    <li class="viva"><a target="_blank" href="http://www.vivahome.com.my/Locate_Us.php#.VKYk5GSUfRI">Viva Home (map)</a></li>
  </ul>
</div>';

  $export['site_footer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social media links';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'social_media';
  $fe_block_boxes->body = '<ul class="social-links"><li class="facebook"><a target="_blank" href="http://www.facebook.com/pages/蛋糕亭/1495464330687365?pnref=lhc">facebook</a></li><li class="instagram"><a target="_blank" href="http://instagram.com/7lovebakery">instagram</a></li><li class="email"><a href="mailto:ast_119@hotmail.com?subject=Inquiry%20on%20cake%20order">email</a></li></ul>';

  $export['social_media'] = $fe_block_boxes;

  return $export;
}
