<?php
/**
 * @file
 * Admin file for Getclicky settigns.
 */

/**
 * function returning a $form for configuring the module
 */
function getclicky_admin_settings() {
  $form['account'] = array(
    '#type' => 'fieldset',
    '#title' => t('GetClicky Account Settings'),
    '#collapsible' => FALSE,
  );

  $form['account']['getclicky_site_id_number'] = array(
    '#type' => 'textfield',
    '#title' => t('Site ID Number'),
    '#default_value' => variable_get('getclicky_site_id_number', ''),
    '#size' => 15,
    '#maxlength' => 20,
    '#required' => TRUE,
    '#description' => t('Example input: 130169<br/>
    This number is unique to every website you track via Clicky(a.k.a. GetClicky).<br/>
    - If you <b>do not</b> have an account with Clicky - you can obtain one from the <a href="@url1">GetClicky</a> website. (clicking on this link shows your support for my development of this module - especially if you decide to buy a Pro account with Clicky. Here is <a href="http://getclicky.com/#theotherguys">why</a> and here is <a href="http://getclicky.com/help/pricing">accounts comparison</a>)<br/>
    - If you <b>DO</b> have a Clicky account - you can find that number here:<br/>
      - anywhere you see a link like that <a href="@url2">http://getclicky.com/<b>130169</b></a> - take only the number - this is your Clicky site ID number.
      - you can find this in your affiliate link (if you have many sites tracked by one Clicky user account - the affiliate link uses the 1st site\'s ID), <br/>
      - also in your tracking code and in your site prefs page ...',
        array('@url1' => 'http://getclicky.com/130169', '@url2' => 'http://getclicky.com/130169')),
  );

  $form['account']['getclicky_site_key_number'] = array(
    '#type' => 'textfield',
    '#title' => t('Site Key Number'),
    '#default_value' => variable_get('getclicky_site_key_number', ''),
    '#size' => 100,
    '#maxlength' => 100,
    '#required' => FALSE,
    '#description' => t('Example input: 72543da7406597242<br/>
    This number is an API key used to display stats on the <a hre"">page</a>.'),
  );

  // Render the role overview.
  $result = db_query('SELECT * FROM {role} ORDER BY name');

  $form['roles'] = array(
    '#type' => 'fieldset',
    '#title' => t('User Role Tracking'),
    '#collapsible' => TRUE,
    '#description' => t('Define what user roles should be tracked by Get Clicky. <strong>Note:</strong> Drupal Admin pages are never tracked.'),
  );

  $form['roles']['getclicky_track_roles'] = array(
    '#type' => 'checkboxes',
    '#options' => user_roles(),
    '#default_value' => variable_get('getclicky_track_roles', array()),
  );

  $form['getclicky_banner_image'] = array(
    '#type' => 'fieldset',
    '#title' => t('GetClicky Banner Image'),
    '#collapsible' => TRUE,
  );

  $form['getclicky_banner_image']['getclicky_show_banner_image'] = array(
    '#type' => 'checkbox',
    '#title' => t('Inject GetClicky Banner Image in html code\'s footer? (right before the closing body tag)'),
    '#description' => t('Check this to show this in your site\'s footer automatically if you want visitors to click on your affiliate link.'),
    '#default_value' => variable_get('getclicky_show_banner_image', FALSE),
  );


  $form['getclicky_banner_image']['getclicky_banner_image_html_code_for_copying'] = array(
    '#type' => 'textarea',
    '#title' => t('HTML Banner code (used in the block we provide)'),
    '#description' => t('This code is used in the block we provide for you - go to <a href="/admin/build/block">/admin/build/block</a> to put it into a region.<br/>
      <b>See here - <a href="http://getclicky.com/user/affiliate">http://getclicky.com/user/affiliate</a> for more banner images. Paste from there into here, and the block here will auto-update. </b>
    '),
    '#default_value' => variable_get('getclicky_banner_image_html_code_for_copying', '<a title="Clicky Web Analytics" href="http://getclicky.com/' . variable_get('getclicky_site_id_number', '') . '"><img alt="Clicky Web Analytics" src="http://static.getclicky.com/media/links/badge.gif" border="0" /></a>'),
  );


/*
  $form['segmentation'] = array(
    '#type' => 'fieldset',
    '#title' => t('User Segmentation'),
    '#collapsible' => TRUE,
    '#description' => t('If your users have profile fields completed, you can track your logged in users based on a defined profile field.'),
  );


// "profile" module integration
  if (!module_exists('profile')) {
    $form['segmentation']['profile'] = array(
      '#type' => 'markup',
      '#value' => t('You need to activate the !profile to use this feature.', array('!profile' => l(t('Profile module'), 'admin/build/modules'))),
      '#prefix' => '<p>',
      '#suffix' => '</p>',
    );
  }
  else {
    // Compile a list of fields to show.
    $fields = unserialize(GETCLICKY_FIELDS_INIT);
    $result = db_query('SELECT name, title, type, weight FROM {profile_fields} ORDER BY weight');
    while ($record = db_fetch_object($result)) {
      $fields[$record->name] = $record->title;
    }
// $fields = Array ( [uid] => User ID (uid in mysql) [name] => Username (name) [roles] => User Roles (roles) )
    $form['segmentation']['getclicky_segmentation'] = array(
      '#type' => 'select',
      '#title' => t('Track'),
      '#description' => t('Selecting one or more values allows you to track users by profile values rather than simply an IP address. To select multiple items, hold down CTRL whilst selecting fields.'),
      '#default_value' => variable_get('getclicky_segmentation', ''),
      '#options' => $fields,
      '#size' => 10,
      '#multiple' => TRUE,
    );

    $default_mappings = unserialize(GETCLICKY_FIELDS_TO_CLICKY_DEFAULT_MAPPINGS);

    foreach ($fields as $key => $value) {
      $form['segmentation']['getclicky_segmentation_mapping_' . $key] = array(
        '#type' => 'textfield',
        '#title' => t('clicky JS var name for drupal profile field named ') . $key . " ($value)",
        '#default_value' => variable_get('getclicky_segmentation_mapping_' . $key,
            (!empty($default_mappings[$key]) ) ? $default_mappings[$key] : $key),
        '#description' => t('Give the getclicky varname you want to corespond to this drupal field.'),
      );
    }
  }
 */

  $form['getclicky_trackfiles'] = array(
    '#type' => 'textfield',
    '#title' => t('File Extensions To Track'),
    '#default_value' => variable_get('getclicky_trackfiles', 'pdf|zip|mp3'),
    '#description' => t('A pipe seperated list of file extensions that should be tracked when clicked. Example !extensions', array('!extensions' => 'pdf|zip|mp3')),
  );

  $form['getclicky_secure_pages_tracking'] = array(
    '#type' => 'fieldset',
    '#title' => t('Secure Pages'),
    '#collapsible' => TRUE,
    '#description' => t('Choose how to track secure pages (https:// aka SSL pages ) (If you do not use SSL in your site - this setting does not matter.)'),
  );

  $form['getclicky_secure_pages_tracking']['getclicky_secure_pages_tracking_option'] = array(
    '#type' => 'radios',
    '#default_value' => variable_get('getclicky_secure_pages_tracking_option', 0),
    '#options' => array(
      t('When onto a https page - do not inject any js code. I do not have a Pro account and/or I do not want to track https pages.'),
      t('When onto a https page - use the js code for secure pages. I have a Pro account.'),
      t('When onto a https page - use the js code for normal http pages. I do not have a Pro account and I do not mind the mixed-content-warning.'),
    ),
  );

  $form['advanced'] = array(
    '#type' => 'fieldset',
    '#title' => t('Advanced'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#description' => t('You can add custom Get Clicky code here.'),
  );

  $form['advanced']['getclicky_codesnippet'] = array(
    '#type' => 'textarea',
    '#title' => t('JavaScript Code'),
    '#default_value' => variable_get('getclicky_codesnippet', ''),
    '#rows' => 15,
    '#description' => t('Paste <a href="@snippets">custom code snippets here</a>. These will be added to every page that Get Clicky appears on.', array('@snippets' => 'http://drupal.org/node/39282')),
  );

  return system_settings_form($form);
}
