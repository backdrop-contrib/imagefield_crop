<?php
/**
 * @file
 * Themeable functions for imagefield_crop module.
 */

/**
 * Theme function: outputs field widget markup.
 */
function theme_imagefield_crop_widget($variables) {
  $element = $variables['element'];

  $wrapper_attributes = array(
    'class' => array(
      'imagefield-crop-widget',
      'form-managed-file',
      'clearfix',
    ),
  );

  $output = '';

  if (isset($element['preview'])) {
    $element['preview']['#attributes']['class'][] = 'form-item';
    $element['preview']['#attributes']['class'][] = 'imagefield-crop-preview';

    $output .= '<div ' . backdrop_attributes($element['preview']['#attributes']) . '>';
    $output .= backdrop_render($element['preview']);
    $output .= '<div class="description">' . $element['preview']['#description'] . '</div>';
    $output .= '</div>';
  }
  if (isset($element['cropbox'])) {
    $element['cropbox']['#attributes']['class'][] = 'form-item';
    $element['cropbox']['#attributes']['class'][] = 'imagefield-crop-cropbox';

    $output .= '<div ' . backdrop_attributes($element['cropbox']['#attributes']) . '>';
    $output .= backdrop_render($element['cropbox']);
    $output .= '<div class="description">' . $element['cropbox']['#description'] . '</div>';
    $output .= '</div>';
  }
  $output .= backdrop_render_children($element);

  return '<div ' . backdrop_attributes($wrapper_attributes) . '>' . $output . '</div>';
}

/**
 * Theme function: outputs image preview.
 */
function theme_imagefield_crop_preview($variables) {
  $info = $variables['element']['#imagefield_crop'];
  $output = $variables['element']['#markup'];
  $output .= theme('image', array(
    'path' => $info['#path'],
    'alt' => 'jcrop-preview',
    'attributes' => array('class' => 'jcrop-preview', 'style' => 'display:none'),
  ));
  return '<div class="jcrop-preview-wrapper" style="width:' . $info['#width'] . 'px; height:' . $info['#height'] . 'px; overflow:hidden;">' . $output . '</div>';
}
