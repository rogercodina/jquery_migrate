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
    ),
    '#default_value' => variable_get('jquery_migrate_activate_on', 2),
  );

  return system_settings_form($form);
}
