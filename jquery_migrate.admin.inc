<?php

/**
 * @file
 * Administration page.
 */

/**
 * Configuration form.
 */
function jquery_migrate_admin_settings($form, &$form_state) {

  $form['jquery_migrate_activate_on'] = array(
    '#type' => 'select',
    '#title' => t('Add jquery migrate on...'),
    '#options' => array(
      0 => t('Administration pages only'),
      1 => t('Frontend pages only'),
      2 => t('All pages'),
      3 => t('None'),
    ),
    '#default_value' => variable_get('jquery_migrate_activate_on', 3),
  );

  $form['jquery_migrate_use_mini_js'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use minified javascript'),
    '#default_value' => variable_get('jquery_migrate_use_mini_js', 1),
  );

  $form['from'] = array(
    '#type' => 'item',
    '#markup' => '<strong>' . t('Important note:') . '</strong> ' . t('Activate only for jQuery versions from 1.7 up to 1.10.'),
  );

  return system_settings_form($form);
}
