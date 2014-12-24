<?php
/**
 * @file   multi-col-stacked.tpl.php
 * @brief  Template for the multi-column stacked panels layout.
 * 
 */
?>
<div class="panel-display panel-multi-col" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  
  <div class="panel-wrapper panel-wrapper-first">
    <div class="panel-panel panel-top">
      <?php print $content['top_stack']; ?>
    </div>
  </div>

  <div class="panel-wrapper panel-wrapper-second">
    <div class="panel-panel three-panel-left">
      <?php print $content['three_left']; ?>
    </div>

    <div class="panel-panel three-panel-middle">
      <?php print $content['three_middle']; ?>
    </div>

    <div class="panel-panel three-panel-right">
      <?php print $content['three_right']; ?>
    </div>
  </div>

  <div class="panel-wrapper panel-wrapper-third">
    <div class="panel-panel panel-centre">
      <?php print $content['centre_stack']; ?>
    </div>
  </div>

  <div class="panel-wrapper panel-wrapper-fourth">
    <div class="panel-panel two-panel-left">
      <?php print $content['two_left']; ?>
    </div>

    <div class="panel-panel two-panel-right">
      <?php print $content['two_right']; ?>
    </div>
  </div>

  <div class="panel-wrapper panel-wrapper-fifth">
    <div class="panel-panel panel-bottom">
      <?php print $content['bottom_stack']; ?>
    </div>
  </div>

</div>
