<?php
/**
 * @file
 * unesco_authentication.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function unesco_authentication_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_authentication_conf';
  $strongarm->value = array(
    'sids' => array(
      'ldap_unesco' => 'ldap_unesco',
      'ldap_fu_unesco' => 'ldap_fu_unesco',
      'ldap_fu_uis_unesco' => 'ldap_fu_uis_unesco',
    ),
    'authenticationMode' => 1,
    'loginConflictResolve' => 2,
    'acctCreation' => 4,
    'loginUIUsernameTxt' => NULL,
    'loginUIPasswordTxt' => NULL,
    'ldapUserHelpLinkUrl' => NULL,
    'ldapUserHelpLinkText' => 'Logon Help',
    'emailOption' => 3,
    'emailUpdate' => 2,
    'allowOnlyIfTextInDn' => array(),
    'excludeIfTextInDn' => array(),
    'allowTestPhp' => '',
    'excludeIfNoAuthorizations' => NULL,
    'ssoRemoteUserStripDomainName' => NULL,
    'seamlessLogin' => NULL,
    'ldapImplementation' => NULL,
    'cookieExpire' => NULL,
  );
  $export['ldap_authentication_conf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_profile_conf';
  $strongarm->value = array(
    'ldap_fields' => array(
      0 => 'samaccountname, samaccountname, samaccountname',
      1 => 'mail, mail, mail',
    ),
    'mapping' => array(
      'username' => 'samaccountname, samaccountname, samaccountname',
      'mail' => 'mail, mail, mail',
      'field_name' => 'givenname',
      'field_surname' => 'sn',
      'field_office' => 'physicaldeliveryofficename',
      'field_title_position' => 'unesco-titleposten',
      'field_grade' => 'unesco-grade',
      'field_phone' => 'telephonenumber',
      'field_department' => 'department',
      'field_personal_title' => 'personaltitle',
    ),
    'derivedMapping' => array(
      'field_name' => array(
        'derive' => FALSE,
        'derive_value' => '',
      ),
      'field_surname' => array(
        'derive' => FALSE,
        'derive_value' => '',
      ),
      'field_office' => array(
        'derive' => FALSE,
        'derive_value' => '',
      ),
      'field_title_position' => array(
        'derive' => FALSE,
        'derive_value' => '',
      ),
      'field_grade' => array(
        'derive' => FALSE,
        'derive_value' => '',
      ),
      'field_phone' => array(
        'derive' => FALSE,
        'derive_value' => '',
      ),
      'field_department' => array(
        'derive' => FALSE,
        'derive_value' => '',
      ),
      'field_personal_title' => array(
        'derive' => FALSE,
        'derive_value' => '',
      ),
    ),
  );
  $export['ldap_profile_conf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_servers_encryption';
  $strongarm->value = '10';
  $export['ldap_servers_encryption'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_servers_encrypt_key';
  $strongarm->value = '.gPiUJe1VY';
  $export['ldap_servers_encrypt_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_servers_require_ssl_for_credentails';
  $strongarm->value = 1;
  $export['ldap_servers_require_ssl_for_credentails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_user_conf';
  $strongarm->value = array(
    'drupalAcctProvisionServer' => 'ldap_unesco',
    'ldapEntryProvisionServer' => 0,
    'drupalAcctProvisionTriggers' => array(
      2 => '2',
      1 => '1',
      3 => '3',
    ),
    'ldapEntryProvisionTriggers' => array(
      6 => 0,
      7 => 0,
      8 => 0,
    ),
    'orphanedDrupalAcctBehavior' => 'ldap_user_orphan_email',
    'orphanedCheckQty' => '100',
    'userConflictResolve' => 2,
    'manualAccountConflict' => '2',
    'acctCreation' => 4,
    'ldapUserSynchMappings' => array(
      1 => array(
        '[field.field_personal_title]' => array(
          'ldap_attr' => '[personaltitle]',
          'user_attr' => '[field.field_personal_title]',
          'convert' => 1,
          'direction' => '1',
          'user_tokens' => NULL,
          'config_module' => 'ldap_user',
          'prov_module' => 'ldap_user',
          'enabled' => 1,
          'prov_events' => array(
            0 => 2,
            1 => 1,
          ),
        ),
        '[field.field_name]' => array(
          'ldap_attr' => '[givenname]',
          'user_attr' => '[field.field_name]',
          'convert' => 0,
          'direction' => '1',
          'user_tokens' => NULL,
          'config_module' => 'ldap_user',
          'prov_module' => 'ldap_user',
          'enabled' => 1,
          'prov_events' => array(
            0 => 2,
            1 => 1,
          ),
        ),
        '[field.field_surname]' => array(
          'ldap_attr' => '[sn]',
          'user_attr' => '[field.field_surname]',
          'convert' => 0,
          'direction' => '1',
          'user_tokens' => NULL,
          'config_module' => 'ldap_user',
          'prov_module' => 'ldap_user',
          'enabled' => 1,
          'prov_events' => array(
            0 => 2,
            1 => 1,
          ),
        ),
        '[field.field_title_position]' => array(
          'ldap_attr' => '[unesco-titleposten]',
          'user_attr' => '[field.field_title_position]',
          'convert' => 0,
          'direction' => '1',
          'user_tokens' => NULL,
          'config_module' => 'ldap_user',
          'prov_module' => 'ldap_user',
          'enabled' => 1,
          'prov_events' => array(
            0 => 2,
            1 => 1,
          ),
        ),
        '[field.field_office]' => array(
          'ldap_attr' => '[physicaldeliveryofficename]',
          'user_attr' => '[field.field_office]',
          'convert' => 0,
          'direction' => '1',
          'user_tokens' => NULL,
          'config_module' => 'ldap_user',
          'prov_module' => 'ldap_user',
          'enabled' => 1,
          'prov_events' => array(
            0 => 2,
            1 => 1,
          ),
        ),
        '[field.field_phone]' => array(
          'ldap_attr' => '[telephonenumber]',
          'user_attr' => '[field.field_phone]',
          'convert' => 0,
          'direction' => '1',
          'user_tokens' => NULL,
          'config_module' => 'ldap_user',
          'prov_module' => 'ldap_user',
          'enabled' => 1,
          'prov_events' => array(
            0 => 2,
            1 => 1,
          ),
        ),
        '[field.field_department]' => array(
          'ldap_attr' => '[department]',
          'user_attr' => '[field.field_department]',
          'convert' => 1,
          'direction' => '1',
          'user_tokens' => NULL,
          'config_module' => 'ldap_user',
          'prov_module' => 'ldap_user',
          'enabled' => 1,
          'prov_events' => array(
            0 => 2,
            1 => 1,
          ),
        ),
        '[field.field_grade]' => array(
          'ldap_attr' => '[unesco-grade]',
          'user_attr' => '[field.field_grade]',
          'convert' => 0,
          'direction' => '1',
          'user_tokens' => NULL,
          'config_module' => 'ldap_user',
          'prov_module' => 'ldap_user',
          'enabled' => 1,
          'prov_events' => array(
            0 => 2,
            1 => 1,
          ),
        ),
      ),
    ),
  );
  $export['ldap_user_conf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_user_cron_last_uid_checked';
  $strongarm->value = 1;
  $export['ldap_user_cron_last_uid_checked'] = $strongarm;

  return $export;
}
