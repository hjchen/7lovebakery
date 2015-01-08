<?php
/**
 * @file
 * sevenlove_translations.features.translations.inc
 */

/**
 * Implements hook_translations_defaults().
 */
function sevenlove_translations_translations_defaults() {
  $translations = array();
  $translations['zh-hant:blocks']['10d88ad3498c5b25ca523b53a0586aab'] = array(
    'source' => '<div class="footer-content footer-about">
  <label>About 7Love Bakery</label>
  <p>I specialise in hand-made custom cakes and cupcakes. All my cakes are made to order just for you. Interested? <a href="contact">Contact me</a> to discuss your order.</p>
</div>

<div class="footer-content footer-contacts">
  <label>Contacts</label>
  <ul class="contacts">
    <li class="wechat">Wechat: ast_0331</li>
    <li class="line">LINE: prettyang</li>
    <li class="email">Email: <a href="mailto:ast_119@hotmail.com;">ast_119@hotmail.com</a></li>
  </ul>
</div>

<div class="footer-content footer-pickup">
  <label>Pickup locations</label>
  <ul class="pickup">
    <li class="leisuremall"><a target="_blank" href="http://www.cherasleisuremall.com.my/contact.php">Cheras Leisure Mall (map)</a></li>
    <li class="viva"><a target="_blank" href="http://www.vivahome.com.my/Locate_Us.php#.VKYk5GSUfRI">Viva Home (map)</a></li>
  </ul>
</div>',
    'context' => 'block:4:body',
    'location' => 'blocks:block:4:body',
    'translation' => '<div class="footer-content footer-about">
  <label>關於蛋糕亭</label>
  <p>蛋糕亭提供各式蛋糕面包，禰月禮盒，翻糖蛋糕。我的商品都是從零至有純手工製作。一律歡迎<a href="contact">聯絡我</a>訂購。</p>
</div>

<div class="footer-content footer-contacts">
  <label>聯絡方式</label>
  <ul class="contacts">
    <li class="wechat">微信: ast_0331</li>
    <li class="line">LINE: prettyang</li>
    <li class="email">客服信箱: <a href="mailto:ast_119@hotmail.com">ast_119@hotmail.com</a></li>
  </ul>
</div>

<div class="footer-content footer-pickup">
  <label>面交地點</label>
  <ul class="pickup">
    <li class="leisuremall"><a target="_blank" href="http://www.cherasleisuremall.com.my/contact.php">Cheras Leisure Mall (地圖)</a></li>
    <li class="viva"><a target="_blank" href="http://www.vivahome.com.my/Locate_Us.php#.VKYk5GSUfRI">Viva Home (地圖)</a></li>
  </ul>
</div>',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:blocks']['67b7e7b2cd2257e1374f3b22a3e13ed5'] = array(
    'source' => '<h2>Hand-made cakes and sweet treats</h2><p>Make someone&#39;s day better with a cake that tastes as good as it looks. All my cakes are lovingly baked from scratch, made fresh to order and contain no preservatives. I specialise in made-to-order cakes, cupcakes and confectionaries for all types of occasions. Or simply because you don&#39;t need a reason to enjoy cake.</p>',
    'context' => 'block:2:body',
    'location' => 'blocks:block:2:body',
    'translation' => '<h2>創意造型蛋糕</h2>
<p>與親友共度別開生面的慶典。來一個獨特的造型蛋糕表達您的心意。您只要提供相片或主題，我將為您烘培別緻的造型蛋糕。</p>',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:blocks']['7da87760a6e607ec9449e02fa3543449'] = array(
    'source' => '<h2>Custom designed celebration cakes</h2><p>Need an idea for the perfect gift? Why not customise a cake unique to your loved one or special occasion? Just provide me a picture or photo of the theme or design you have in mind and I&#39;ll take care of the rest.</p>',
    'context' => 'block:1:body',
    'location' => 'blocks:block:1:body',
    'translation' => '<h2>歡迎光臨蛋糕亭</h2>
<p>人生中各重大的節日，總少不了蛋糕。沒有蛋糕，似乎就少了慶祝的感覺。我提供客製化蛋糕服務，為您自製專屬造型蛋糕。我使用天然食材，不含防腐劑。精心製作趣味十足的蛋糕，讓您留下難忘的回憶。</p>',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:default']['084c313d1ba07c2a4a43655e0b9023b0'] = array(
    'source' => 'Cake gallery',
    'context' => '',
    'location' => '/admin/structure/views/view/cakes/edit/cakes',
    'translation' => '蛋糕庫',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:default']['b1c94ca2fbc3e78fc30069c8d0f01680'] = array(
    'source' => 'All',
    'context' => '',
    'location' => '/zh/admin/structure/block',
    'translation' => '全部',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:metatag']['2393f82a49c3bf8f7724f44f94809360'] = array(
    'source' => '[site:name] - Custom cakes, cupcakes and confectioneries',
    'context' => 'global:frontpage:title',
    'location' => 'metatag:global:frontpage:title',
    'translation' => '蛋糕亭',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:metatag']['62b6caf93492c4247b2611cdf2c056f8'] = array(
    'source' => '[view:title] | [site:name]',
    'context' => 'view:title',
    'location' => 'metatag:view:title',
    'translation' => '[view:title] | 蛋糕亭',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:metatag']['e81c4889d830cce6604c06ff5c752436'] = array(
    'source' => 'I specialise in hand-made custom cakes, cupcakes and confectioneries. All my cakes are made to order and personalised to suit your special occasion.',
    'context' => 'global:frontpage:description',
    'location' => 'metatag:global:frontpage:description',
    'translation' => '蛋糕亭提供各式蛋糕面包，禰月禮盒，翻糖蛋糕。我的商品都是從零至有純手工製作。',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:taxonomy']['24ad8ddac289f423afa90ad550437cd4'] = array(
    'source' => 'Butter cake',
    'context' => 'term:4:name',
    'location' => 'taxonomy:term:4:name',
    'translation' => '奶油蛋糕',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:taxonomy']['34abd6a78be1d9826f3cf86652e88505'] = array(
    'source' => 'Sugar sheet cupcake',
    'context' => 'term:2:name',
    'location' => 'taxonomy:term:2:name',
    'translation' => '糖紙紙杯蛋糕',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:taxonomy']['437e9369a57936247ef69033c9205908'] = array(
    'source' => 'Celebration cake',
    'context' => 'term:5:name',
    'location' => 'taxonomy:term:5:name',
    'translation' => '慶典蛋糕',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:taxonomy']['80eb02dea368933c0d2188a0ca1b1110'] = array(
    'source' => 'Icing cake',
    'context' => 'term:3:name',
    'location' => 'taxonomy:term:3:name',
    'translation' => '糖霜蛋糕',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:taxonomy']['86c10339a78bdb51e9c0affc7d5492d1'] = array(
    'source' => 'Standard cake',
    'context' => 'vocabulary:4:name',
    'location' => 'taxonomy:vocabulary:4:name',
    'translation' => '一般蛋糕',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:taxonomy']['88bc162a47814162a922025651d5328d'] = array(
    'source' => 'Fondant cupcake',
    'context' => 'term:7:name',
    'location' => 'taxonomy:term:7:name',
    'translation' => '翻糖紙杯蛋糕',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:taxonomy']['88c7a55d91e2923dfa91f96dc11e8c0e'] = array(
    'source' => 'Sugar sheet cake',
    'context' => 'term:8:name',
    'location' => 'taxonomy:term:8:name',
    'translation' => '糖紙蛋糕',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:taxonomy']['8ad44f0c205c76a759d310a43605f95e'] = array(
    'source' => 'Chiffon cake',
    'context' => 'term:6:name',
    'location' => 'taxonomy:term:6:name',
    'translation' => '威風蛋糕',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:taxonomy']['9061fe86e07c5b879f5cf7843ec0b56d'] = array(
    'source' => 'Custom cupcake',
    'context' => 'vocabulary:3:name',
    'location' => 'taxonomy:vocabulary:3:name',
    'translation' => '造型紙杯蛋糕',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:taxonomy']['d01f70d109acc5294a2adf325ba0cee8'] = array(
    'source' => 'Fondant cake',
    'context' => 'term:1:name',
    'location' => 'taxonomy:term:1:name',
    'translation' => '翻糖蛋糕',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:taxonomy']['fc110e08a522b31c73070dc1d2b4d628'] = array(
    'source' => 'Custom cake',
    'context' => 'vocabulary:2:name',
    'location' => 'taxonomy:vocabulary:2:name',
    'translation' => '造型蛋糕',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['035bf8a3cbca2aef8b682877cf98dd3c'] = array(
    'source' => 'View panes',
    'context' => 'cakes:custom_cupcakes_hp:pane_category:name',
    'location' => 'views:cakes:custom_cupcakes_hp:pane_category:name',
    'translation' => 'View panes',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['055f48905337b33255394c6c4289a1a0'] = array(
    'source' => '<small>[title]</small>',
    'context' => 'cakes:custom_cakes:field:colorbox:colorbox:alter:text',
    'location' => 'views:cakes:custom_cakes:field:colorbox:colorbox:alter:text',
    'translation' => '<small>[title]</small>',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['086c968ca753df47bd95d91aa8ccb751'] = array(
    'source' => 'Apply',
    'context' => 'cakes:confectionaries_hp:exposed_form:submit_button',
    'location' => 'views:cakes:confectionaries_hp:exposed_form:submit_button',
    'translation' => 'Apply',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['09e0d9747a60a5491b9e2b5ddd81824e'] = array(
    'source' => '<none>',
    'context' => 'cakes:default:title',
    'location' => 'views:cakes:default:title',
    'translation' => '<none>',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['0b925dd7967ce1bb71bbec12f5734c09'] = array(
    'source' => 'Reset',
    'context' => 'cakes:custom_cakes_hp:exposed_form:reset_button_label',
    'location' => 'views:cakes:custom_cakes_hp:exposed_form:reset_button_label',
    'translation' => 'Reset',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['1101434f4c4b6438a99f4d4897b91d9d'] = array(
    'source' => 'Apply',
    'context' => 'cakes:standard_cupcakes:exposed_form:submit_button',
    'location' => 'views:cakes:standard_cupcakes:exposed_form:submit_button',
    'translation' => 'Apply',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['11a1d7b0dd9f6ab630c967e113e5e7ae'] = array(
    'source' => 'more',
    'context' => 'cakes:custom_cakes:use_more_text',
    'location' => 'views:cakes:custom_cakes:use_more_text',
    'translation' => 'more',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['134ece178d53bb365bb93cf5bb650676'] = array(
    'source' => 'Reset',
    'context' => 'cakes:confectioneries:exposed_form:reset_button_label',
    'location' => 'views:cakes:confectioneries:exposed_form:reset_button_label',
    'translation' => 'Reset',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['15bcca2ce21f6c3f1e370281311746f5'] = array(
    'source' => 'more',
    'context' => 'cakes:confectioneries:use_more_text',
    'location' => 'views:cakes:confectioneries:use_more_text',
    'translation' => 'more',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['174cd104af1da312b66e38aae33498be'] = array(
    'source' => 'Reset',
    'context' => 'cakes:cake_hp:exposed_form:reset_button_label',
    'location' => 'views:cakes:cake_hp:exposed_form:reset_button_label',
    'translation' => 'Reset',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['19ba81e7dbe488072e7480c945f94e52'] = array(
    'source' => 'Reset',
    'context' => 'cakes:standard_cakes:exposed_form:reset_button_label',
    'location' => 'views:cakes:standard_cakes:exposed_form:reset_button_label',
    'translation' => 'Reset',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['1b84f0cfd433fe275c1046527e21df71'] = array(
    'source' => '<small>[title]</small>',
    'context' => 'cakes:standard_cupcakes:field:colorbox:colorbox:alter:text',
    'location' => 'views:cakes:standard_cupcakes:field:colorbox:colorbox:alter:text',
    'translation' => '<small>[title]</small>',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['1c866bf06c06eb2531a2808c47f8acc8'] = array(
    'source' => '<small>[title]</small>',
    'context' => 'cakes:standard_cakes:field:colorbox:colorbox:alter:text',
    'location' => 'views:cakes:standard_cakes:field:colorbox:colorbox:alter:text',
    'translation' => '<small>[title]</small>',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['2651ca872a9ec8097d6c477fa278b13a'] = array(
    'source' => 'Reset',
    'context' => 'cake_filter:default:exposed_form:reset_button_label',
    'location' => 'views:cake_filter:default:exposed_form:reset_button_label',
    'translation' => 'Reset',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['27bae966ca648326872ae8934a9f49b2'] = array(
    'source' => 'Desc',
    'context' => 'cakes:custom_cakes_hp:exposed_form:sort_desc_label',
    'location' => 'views:cakes:custom_cakes_hp:exposed_form:sort_desc_label',
    'translation' => 'Desc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['29853cbe02fe5718e6c0b5663099f92b'] = array(
    'source' => '<small>[title]</small>',
    'context' => 'cakes:confectioneries:field:colorbox:colorbox:alter:text',
    'location' => 'views:cakes:confectioneries:field:colorbox:colorbox:alter:text',
    'translation' => '<small>[title]</small>',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['2c1297ca958edaeab5747a8d54f65776'] = array(
    'source' => 'Custom cakes',
    'context' => 'cakes:custom_cakes:title',
    'location' => 'views:cakes:custom_cakes:title',
    'translation' => '造型蛋糕',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['2dfc6e0d0413abff0a4f1dd4c8d85a4a'] = array(
    'source' => 'more',
    'context' => 'cakes:cupcakes_hp:use_more_text',
    'location' => 'views:cakes:cupcakes_hp:use_more_text',
    'translation' => 'more',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['366555ff5eb4d946390b7da3eab427d5'] = array(
    'source' => 'Desc',
    'context' => 'cakes:default:exposed_form:sort_desc_label',
    'location' => 'views:cakes:default:exposed_form:sort_desc_label',
    'translation' => 'Desc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['37295ae2d153c96a865910b9c0886d3e'] = array(
    'source' => 'Desc',
    'context' => 'cakes:standard_cakes:exposed_form:sort_desc_label',
    'location' => 'views:cakes:standard_cakes:exposed_form:sort_desc_label',
    'translation' => 'Desc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['399d78c5493532f1a127755a8daf04b2'] = array(
    'source' => '[field_image]
<div class="view-text">
<h3>Custom cupcakes</h3>
</div>',
    'context' => 'cakes:custom_cupcakes_hp:field:field_data_field_image:field_image:alter:text',
    'location' => 'views:cakes:custom_cupcakes_hp:field:field_data_field_image:field_image:alter:text',
    'translation' => '[field_image]
<div class="view-text">
<h3>造型紙杯蛋糕</h3>
</div>',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['3a0e5ae31cb4a02b8c9cfc71e189f53e'] = array(
    'source' => 'Asc',
    'context' => 'cakes:confectionaries_hp:exposed_form:sort_asc_label',
    'location' => 'views:cakes:confectionaries_hp:exposed_form:sort_asc_label',
    'translation' => 'Asc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['3c5f093acfcdd9265c1f9bb37bf3da43'] = array(
    'source' => 'Asc',
    'context' => 'cakes:cake_hp:exposed_form:sort_asc_label',
    'location' => 'views:cakes:cake_hp:exposed_form:sort_asc_label',
    'translation' => 'Asc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['3f6d69b64ae22fc07c21eb8720412055'] = array(
    'source' => 'Reset',
    'context' => 'cakes:custom_cupcakes_hp:exposed_form:reset_button_label',
    'location' => 'views:cakes:custom_cupcakes_hp:exposed_form:reset_button_label',
    'translation' => 'Reset',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['437f7fe3abe989a1aae05fc9084ac743'] = array(
    'source' => 'Sort by',
    'context' => 'cakes:custom_cupcakes_hp:exposed_form:exposed_sorts_label',
    'location' => 'views:cakes:custom_cupcakes_hp:exposed_form:exposed_sorts_label',
    'translation' => 'Sort by',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['43b00755d0b0fb193f13402db196be2e'] = array(
    'source' => 'Reset',
    'context' => 'cakes:confectionaries_hp:exposed_form:reset_button_label',
    'location' => 'views:cakes:confectionaries_hp:exposed_form:reset_button_label',
    'translation' => 'Reset',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['449e7b57a47158b781763282a4279c6a'] = array(
    'source' => 'Sort by',
    'context' => 'cakes:custom_cupcakes:exposed_form:exposed_sorts_label',
    'location' => 'views:cakes:custom_cupcakes:exposed_form:exposed_sorts_label',
    'translation' => 'Sort by',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['44b7d6ba5a6f7347121a40ed23e2df10'] = array(
    'source' => 'more',
    'context' => 'cakes:confectionaries_hp:use_more_text',
    'location' => 'views:cakes:confectionaries_hp:use_more_text',
    'translation' => 'more',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['4955ab9dc2cef2d5da3f3c2d870124ea'] = array(
    'source' => 'Standard cakes',
    'context' => 'cakes:standard_cakes:title',
    'location' => 'views:cakes:standard_cakes:title',
    'translation' => '一般蛋糕',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['4c92e55a52b023ac1d31734f699911ba'] = array(
    'source' => 'Asc',
    'context' => 'cakes:custom_cupcakes_hp:exposed_form:sort_asc_label',
    'location' => 'views:cakes:custom_cupcakes_hp:exposed_form:sort_asc_label',
    'translation' => 'Asc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['4caa9c1722ff4281d6703b290117ed2f'] = array(
    'source' => 'Desc',
    'context' => 'cakes:custom_cupcakes:exposed_form:sort_desc_label',
    'location' => 'views:cakes:custom_cupcakes:exposed_form:sort_desc_label',
    'translation' => 'Desc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['4cbcfdfb62044aea2f638c06c9c8eb8a'] = array(
    'source' => 'Custom cupcakes',
    'context' => 'cakes:custom_cupcakes:title',
    'location' => 'views:cakes:custom_cupcakes:title',
    'translation' => '造型紙杯蛋糕',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['4f76e24ae7c229cf00ef316d003a3fda'] = array(
    'source' => 'Desc',
    'context' => 'cakes:confectionaries_hp:exposed_form:sort_desc_label',
    'location' => 'views:cakes:confectionaries_hp:exposed_form:sort_desc_label',
    'translation' => 'Desc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['54a779fc8d22c9a1b788cecf1d2c5cee'] = array(
    'source' => '[field_image]
<div class="view-text">
<h3>Cakes</h3>
</div>',
    'context' => 'cakes:default:field:field_data_field_image:field_image:alter:text',
    'location' => 'views:cakes:default:field:field_data_field_image:field_image:alter:text',
    'translation' => '[field_image]
<div class="view-text">
<h3>一般蛋糕</h3>
</div>',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['567a796083c394ac900aa954cf1a7ce1'] = array(
    'source' => 'Reset',
    'context' => 'cakes:default:exposed_form:reset_button_label',
    'location' => 'views:cakes:default:exposed_form:reset_button_label',
    'translation' => 'Reset',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['59229578158c7a2d9bcee808e816c9a0'] = array(
    'source' => 'Desc',
    'context' => 'cakes:confectioneries:exposed_form:sort_desc_label',
    'location' => 'views:cakes:confectioneries:exposed_form:sort_desc_label',
    'translation' => 'Desc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['5c1ab7a6599f7304e778d5b643d6dc03'] = array(
    'source' => 'Desc',
    'context' => 'cakes:cupcakes_hp:exposed_form:sort_desc_label',
    'location' => 'views:cakes:cupcakes_hp:exposed_form:sort_desc_label',
    'translation' => 'Desc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['5dc9011e2f7dca58dc1e741125729ba0'] = array(
    'source' => 'Asc',
    'context' => 'cakes:standard_cupcakes:exposed_form:sort_asc_label',
    'location' => 'views:cakes:standard_cupcakes:exposed_form:sort_asc_label',
    'translation' => 'Asc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['60cc7ec3dceff31c571276f642644d41'] = array(
    'source' => 'Apply',
    'context' => 'cakes:custom_cakes_hp:exposed_form:submit_button',
    'location' => 'views:cakes:custom_cakes_hp:exposed_form:submit_button',
    'translation' => 'Apply',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['63d2a56da0c963401e55e551cb579637'] = array(
    'source' => 'more',
    'context' => 'cakes:custom_cakes_hp:use_more_text',
    'location' => 'views:cakes:custom_cakes_hp:use_more_text',
    'translation' => 'more',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['69bfc97e3669e96ebfba28eeddd92759'] = array(
    'source' => 'more',
    'context' => 'cakes:standard_cakes:use_more_text',
    'location' => 'views:cakes:standard_cakes:use_more_text',
    'translation' => 'more',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['731ae0b5293a425063ea67fb132a9bf1'] = array(
    'source' => 'Sort by',
    'context' => 'cakes:standard_cupcakes:exposed_form:exposed_sorts_label',
    'location' => 'views:cakes:standard_cupcakes:exposed_form:exposed_sorts_label',
    'translation' => 'Sort by',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['77861536a114f7163cf920dff0a532dd'] = array(
    'source' => 'Reset',
    'context' => 'cakes:custom_cupcakes:exposed_form:reset_button_label',
    'location' => 'views:cakes:custom_cupcakes:exposed_form:reset_button_label',
    'translation' => 'Reset',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['7807652bf4d4b9d1ccd813a28b475361'] = array(
    'source' => 'Apply',
    'context' => 'cakes:standard_cakes:exposed_form:submit_button',
    'location' => 'views:cakes:standard_cakes:exposed_form:submit_button',
    'translation' => 'Apply',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['7a7bb7d3af3c2cd8ad342032fc23b5b2'] = array(
    'source' => 'Custom cake type',
    'context' => 'cakes:custom_cakes:field:field_data_field_custom_cake_type:field_custom_cake_type:label',
    'location' => 'views:cakes:custom_cakes:field:field_data_field_custom_cake_type:field_custom_cake_type:label',
    'translation' => 'Custom cake type',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['7f377570e38b637c9cead2e44eaf5bb3'] = array(
    'source' => 'Desc',
    'context' => 'cakes:cake_hp:exposed_form:sort_desc_label',
    'location' => 'views:cakes:cake_hp:exposed_form:sort_desc_label',
    'translation' => 'Desc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['7fe884a73418773521fed36605c759f7'] = array(
    'source' => 'Asc',
    'context' => 'cakes:custom_cupcakes:exposed_form:sort_asc_label',
    'location' => 'views:cakes:custom_cupcakes:exposed_form:sort_asc_label',
    'translation' => 'Asc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['826e612214a5e2149f7c9f33dca804ef'] = array(
    'source' => 'Desc',
    'context' => 'cakes:custom_cakes:exposed_form:sort_desc_label',
    'location' => 'views:cakes:custom_cakes:exposed_form:sort_desc_label',
    'translation' => 'Desc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['82c0ed5cd000798e01e5a2f847ed2c7f'] = array(
    'source' => 'Sort by',
    'context' => 'cakes:confectionaries_hp:exposed_form:exposed_sorts_label',
    'location' => 'views:cakes:confectionaries_hp:exposed_form:exposed_sorts_label',
    'translation' => 'Sort by',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['8b10136ce409024c8f582228ea40b577'] = array(
    'source' => 'Apply',
    'context' => 'cake_filter:default:exposed_form:submit_button',
    'location' => 'views:cake_filter:default:exposed_form:submit_button',
    'translation' => 'Apply',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['8f3031c51b4eb5ddd7216f881a0af819'] = array(
    'source' => 'View panes',
    'context' => 'cakes:confectionaries_hp:pane_category:name',
    'location' => 'views:cakes:confectionaries_hp:pane_category:name',
    'translation' => 'View panes',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['8f3ea7453e7cf3f9933965a606f9709c'] = array(
    'source' => 'Asc',
    'context' => 'cakes:standard_cakes:exposed_form:sort_asc_label',
    'location' => 'views:cakes:standard_cakes:exposed_form:sort_asc_label',
    'translation' => 'Asc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['9039d755db54a9d7236c05d1a47ba493'] = array(
    'source' => 'Asc',
    'context' => 'cakes:confectioneries:exposed_form:sort_asc_label',
    'location' => 'views:cakes:confectioneries:exposed_form:sort_asc_label',
    'translation' => 'Asc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['948bd7fdcdcb4b237a5a336767b0c018'] = array(
    'source' => 'Sort by',
    'context' => 'cakes:custom_cakes:exposed_form:exposed_sorts_label',
    'location' => 'views:cakes:custom_cakes:exposed_form:exposed_sorts_label',
    'translation' => 'Sort by',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['9b848bfa58fe3b6142388b3c83662fb0'] = array(
    'source' => 'Sort by',
    'context' => 'cakes:cake_hp:exposed_form:exposed_sorts_label',
    'location' => 'views:cakes:cake_hp:exposed_form:exposed_sorts_label',
    'translation' => 'Sort by',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['9bad5186d9eda111de820478afa066e2'] = array(
    'source' => 'more',
    'context' => 'cakes:standard_cupcakes:use_more_text',
    'location' => 'views:cakes:standard_cupcakes:use_more_text',
    'translation' => 'more',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['9c05d17ec9e3d16321ceb1eecf404825'] = array(
    'source' => 'There are no photos of this type of cake at the moment.',
    'context' => 'cakes:default:empty:views:area:content',
    'location' => 'views:cakes:default:empty:views:area:content',
    'translation' => 'There are no photos of this type of cake at the moment.',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['9dbc2eb41fba79ea38ce067d90a359fd'] = array(
    'source' => 'Apply',
    'context' => 'cakes:confectioneries:exposed_form:submit_button',
    'location' => 'views:cakes:confectioneries:exposed_form:submit_button',
    'translation' => 'Apply',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['a005a2b9a94bbd62b8daec388e1ba66d'] = array(
    'source' => 'View panes',
    'context' => 'cakes:cake_hp:pane_category:name',
    'location' => 'views:cakes:cake_hp:pane_category:name',
    'translation' => 'View panes',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['a233bcf51ded1689d298365770892937'] = array(
    'source' => 'Apply',
    'context' => 'cakes:cupcakes_hp:exposed_form:submit_button',
    'location' => 'views:cakes:cupcakes_hp:exposed_form:submit_button',
    'translation' => 'Apply',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['a345d5463aa7484f1910454d8754e9e2'] = array(
    'source' => 'Apply',
    'context' => 'cakes:cake_hp:exposed_form:submit_button',
    'location' => 'views:cakes:cake_hp:exposed_form:submit_button',
    'translation' => 'Apply',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['ac68e824ca9bc63208203bcd719b8b03'] = array(
    'source' => 'Apply',
    'context' => 'cakes:custom_cakes:exposed_form:submit_button',
    'location' => 'views:cakes:custom_cakes:exposed_form:submit_button',
    'translation' => 'Apply',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['ad1442e696ea0124f91a5f83853fce83'] = array(
    'source' => 'Reset',
    'context' => 'cakes:standard_cupcakes:exposed_form:reset_button_label',
    'location' => 'views:cakes:standard_cupcakes:exposed_form:reset_button_label',
    'translation' => 'Reset',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['b2a2ea17e4e9fa337a114d2fbb84375b'] = array(
    'source' => 'Standard cupcakes',
    'context' => 'cakes:standard_cupcakes:title',
    'location' => 'views:cakes:standard_cupcakes:title',
    'translation' => '紙杯蛋糕',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['b699c3a38654d31ab1edf09ac290c6c6'] = array(
    'source' => '[field_image]
<div class="view-text">
<h3>Confectionaries</h3>
</div>',
    'context' => 'cakes:confectionaries_hp:field:field_data_field_image:field_image:alter:text',
    'location' => 'views:cakes:confectionaries_hp:field:field_data_field_image:field_image:alter:text',
    'translation' => '[field_image]
<div class="view-text">
<h3>糕點糖果</h3>
</div>',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['b785c64dc08f77524afe04ddf6151e8f'] = array(
    'source' => 'Reset',
    'context' => 'cakes:cupcakes_hp:exposed_form:reset_button_label',
    'location' => 'views:cakes:cupcakes_hp:exposed_form:reset_button_label',
    'translation' => 'Reset',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['b93cfadab1d8708385ce16b96b923157'] = array(
    'source' => 'Sort by',
    'context' => 'cakes:standard_cakes:exposed_form:exposed_sorts_label',
    'location' => 'views:cakes:standard_cakes:exposed_form:exposed_sorts_label',
    'translation' => 'Sort by',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['ba14788839a64d43e9a9daa443468b7f'] = array(
    'source' => 'Desc',
    'context' => 'cakes:standard_cupcakes:exposed_form:sort_desc_label',
    'location' => 'views:cakes:standard_cupcakes:exposed_form:sort_desc_label',
    'translation' => 'Desc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['bbc6153d54b6c93f58294524699b9760'] = array(
    'source' => '<none>',
    'context' => 'cakes:custom_cupcakes_hp:title',
    'location' => 'views:cakes:custom_cupcakes_hp:title',
    'translation' => '<none>',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['bd61143ab92ddf0173ed1e7a284f18ed'] = array(
    'source' => 'Confectioneries',
    'context' => 'cakes:confectioneries:title',
    'location' => 'views:cakes:confectioneries:title',
    'translation' => '糕點餅類',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['bd9df3bb17699d59720f648926191953'] = array(
    'source' => 'Sort by',
    'context' => 'cakes:default:exposed_form:exposed_sorts_label',
    'location' => 'views:cakes:default:exposed_form:exposed_sorts_label',
    'translation' => 'Sort by',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['c2ae9ef7611e51e210783fa2f01ec9ba'] = array(
    'source' => 'Desc',
    'context' => 'cake_filter:default:exposed_form:sort_desc_label',
    'location' => 'views:cake_filter:default:exposed_form:sort_desc_label',
    'translation' => 'Desc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['c2b4c75f39be48cc7fffb75602ecc57b'] = array(
    'source' => '[field_image]
<div class="view-text">
<h3>Custom cakes</h3>
</div>',
    'context' => 'cakes:custom_cakes_hp:field:field_data_field_image:field_image:alter:text',
    'location' => 'views:cakes:custom_cakes_hp:field:field_data_field_image:field_image:alter:text',
    'translation' => '[field_image]
<div class="view-text">
<h3>造型蛋糕</h3>
</div>',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['c794e5daed1374695038397fb2907f3c'] = array(
    'source' => 'more',
    'context' => 'cakes:custom_cupcakes:use_more_text',
    'location' => 'views:cakes:custom_cupcakes:use_more_text',
    'translation' => 'more',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['ca748426ab5315544c9a049d29842b64'] = array(
    'source' => 'Asc',
    'context' => 'cakes:default:exposed_form:sort_asc_label',
    'location' => 'views:cakes:default:exposed_form:sort_asc_label',
    'translation' => 'Asc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['cb0a9c3cf8368b8f8b3f66e049ae440d'] = array(
    'source' => 'View panes',
    'context' => 'cakes:cupcakes_hp:pane_category:name',
    'location' => 'views:cakes:cupcakes_hp:pane_category:name',
    'translation' => 'View panes',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['ce620873ed1cc6037fb0ce6855e446e0'] = array(
    'source' => 'Apply',
    'context' => 'cakes:custom_cupcakes_hp:exposed_form:submit_button',
    'location' => 'views:cakes:custom_cupcakes_hp:exposed_form:submit_button',
    'translation' => 'Apply',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['d2c02d14521095282d29527ed845e139'] = array(
    'source' => 'View panes',
    'context' => 'cakes:custom_cakes_hp:pane_category:name',
    'location' => 'views:cakes:custom_cakes_hp:pane_category:name',
    'translation' => 'View panes',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['d40c476480b4bd460910f9068dd24bc0'] = array(
    'source' => 'Sort by',
    'context' => 'cake_filter:default:exposed_form:exposed_sorts_label',
    'location' => 'views:cake_filter:default:exposed_form:exposed_sorts_label',
    'translation' => 'Sort by',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['d6a096e4ac10f0ac6f85663e359e62e4'] = array(
    'source' => 'Asc',
    'context' => 'cake_filter:default:exposed_form:sort_asc_label',
    'location' => 'views:cake_filter:default:exposed_form:sort_asc_label',
    'translation' => 'Asc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['d7508736ec79600bc437c40ffa853c9d'] = array(
    'source' => 'more',
    'context' => 'cakes:default:use_more_text',
    'location' => 'views:cakes:default:use_more_text',
    'translation' => 'more',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['dc066c3a952bd0fba8ae47ae721d5c7b'] = array(
    'source' => 'more',
    'context' => 'cakes:cake_hp:use_more_text',
    'location' => 'views:cakes:cake_hp:use_more_text',
    'translation' => 'more',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['df89a34b9c5dfc3f7d4204d7ce754414'] = array(
    'source' => 'Sort by',
    'context' => 'cakes:cupcakes_hp:exposed_form:exposed_sorts_label',
    'location' => 'views:cakes:cupcakes_hp:exposed_form:exposed_sorts_label',
    'translation' => 'Sort by',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['e385a2c2e1df3438473456971d34279e'] = array(
    'source' => 'Reset',
    'context' => 'cakes:custom_cakes:exposed_form:reset_button_label',
    'location' => 'views:cakes:custom_cakes:exposed_form:reset_button_label',
    'translation' => 'Reset',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['e5b12d66ba33b89bb3ee80e503d143f5'] = array(
    'source' => '<small>[title]</small>',
    'context' => 'cakes:custom_cupcakes:field:colorbox:colorbox:alter:text',
    'location' => 'views:cakes:custom_cupcakes:field:colorbox:colorbox:alter:text',
    'translation' => '<small>[title]</small>',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['e6c843429d796b5aa1ac54a7191a3b2a'] = array(
    'source' => 'Asc',
    'context' => 'cakes:custom_cakes_hp:exposed_form:sort_asc_label',
    'location' => 'views:cakes:custom_cakes_hp:exposed_form:sort_asc_label',
    'translation' => 'Asc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['e8227fd753d50d9bb4f5b9ce765b11b0'] = array(
    'source' => 'Apply',
    'context' => 'cakes:custom_cupcakes:exposed_form:submit_button',
    'location' => 'views:cakes:custom_cupcakes:exposed_form:submit_button',
    'translation' => 'Apply',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['ea3c9afbf0777219e9763d20138c0d78'] = array(
    'source' => 'Apply',
    'context' => 'cakes:default:exposed_form:submit_button',
    'location' => 'views:cakes:default:exposed_form:submit_button',
    'translation' => 'Apply',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['ea6471de95f51b06a84c711ab10e21e4'] = array(
    'source' => 'Asc',
    'context' => 'cakes:custom_cakes:exposed_form:sort_asc_label',
    'location' => 'views:cakes:custom_cakes:exposed_form:sort_asc_label',
    'translation' => 'Asc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['ebc06aa682faad43e7d835b26b9b15ec'] = array(
    'source' => '[field_image]
<div class="view-text">
<h3>Cakes</h3>
</div>',
    'context' => 'cakes:cake_hp:field:field_data_field_image:field_image:alter:text',
    'location' => 'views:cakes:cake_hp:field:field_data_field_image:field_image:alter:text',
    'translation' => '[field_image]
<div class="view-text">
<h3>一般蛋糕</h3>
</div>',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['ef26f018acc85a466af26552bf6ed41c'] = array(
    'source' => 'more',
    'context' => 'cakes:custom_cupcakes_hp:use_more_text',
    'location' => 'views:cakes:custom_cupcakes_hp:use_more_text',
    'translation' => 'more',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['f1776b4dfc7c4374055b294283867f20'] = array(
    'source' => 'Sort by',
    'context' => 'cakes:custom_cakes_hp:exposed_form:exposed_sorts_label',
    'location' => 'views:cakes:custom_cakes_hp:exposed_form:exposed_sorts_label',
    'translation' => 'Sort by',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['f266c56ad5c9f196cb50483badb7ce19'] = array(
    'source' => 'more',
    'context' => 'cake_filter:default:use_more_text',
    'location' => 'views:cake_filter:default:use_more_text',
    'translation' => '更多',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['fb17fd48b7af42d135f08543b901d5e1'] = array(
    'source' => 'Homepage panel display for cakes',
    'context' => 'cakes:cake_hp:display_description',
    'location' => 'views:cakes:cake_hp:display_description',
    'translation' => 'Homepage panel display for cakes',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['fc120143b4070d195444b0ef6680b06d'] = array(
    'source' => 'Asc',
    'context' => 'cakes:cupcakes_hp:exposed_form:sort_asc_label',
    'location' => 'views:cakes:cupcakes_hp:exposed_form:sort_asc_label',
    'translation' => 'Asc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['fcd78b45f2834adf144c94d1206da8de'] = array(
    'source' => '[field_image]
<div class="view-text">
<h3>Cupcakes</h3>
</div>',
    'context' => 'cakes:cupcakes_hp:field:field_data_field_image:field_image:alter:text',
    'location' => 'views:cakes:cupcakes_hp:field:field_data_field_image:field_image:alter:text',
    'translation' => '[field_image]
<div class="view-text">
<h3>紙杯蛋糕</h3>
</div>',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['fe6dc1caf763e2c594ab9b2d777d582e'] = array(
    'source' => 'Desc',
    'context' => 'cakes:custom_cupcakes_hp:exposed_form:sort_desc_label',
    'location' => 'views:cakes:custom_cupcakes_hp:exposed_form:sort_desc_label',
    'translation' => 'Desc',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['zh-hant:views']['fe715df9c235d862e3702b767c00879c'] = array(
    'source' => 'Sort by',
    'context' => 'cakes:confectioneries:exposed_form:exposed_sorts_label',
    'location' => 'views:cakes:confectioneries:exposed_form:exposed_sorts_label',
    'translation' => 'Sort by',
    'plid' => 0,
    'plural' => 0,
  );
  return $translations;
}
