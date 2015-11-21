<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php print $content_eu4_provinces_history; ?>
</div>
<?php if (isset($content_eu4_provinces_map_climate)): ?>
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
    <?php print $content_eu4_provinces_map_climate; ?>
  </div>
<?php endif; ?>
<?php if (isset($content_eu4_provinces_map_trade_winds)): ?>
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
    <?php print $content_eu4_provinces_map_trade_winds; ?>
  </div>
<?php endif; ?>
<?php if (isset($content_eu4_provinces_common_names)): ?>
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
    <?php print $content_eu4_provinces_common_names; ?>
  </div>
<?php endif; ?>