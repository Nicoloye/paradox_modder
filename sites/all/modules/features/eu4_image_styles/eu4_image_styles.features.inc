<?php
/**
 * @file
 * eu4_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function eu4_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: flag.
  $styles['flag'] = array(
    'label' => 'Flag',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 128,
          'height' => 128,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
