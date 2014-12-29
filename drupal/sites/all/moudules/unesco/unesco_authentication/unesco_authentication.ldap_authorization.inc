<?php
/**
 * @file
 * unesco_authentication.ldap_authorization.inc
 */

/**
 * Implements hook_default_ldap_authorization().
 */
function unesco_authentication_default_ldap_authorization() {
  $export = array();

  $consumer_type = new stdClass();
  $consumer_type->disabled = FALSE; /* Edit this to true to make a default consumer_type disabled initially */
  $consumer_type->api_version = 1;
  $consumer_type->sid = 'ldap_unesco';
  $consumer_type->consumer_type = 'drupal_role';
  $consumer_type->consumer_module = 'ldap_authorization_drupal_role';
  $consumer_type->status = TRUE;
  $consumer_type->only_ldap_authenticated = TRUE;
  $consumer_type->use_first_attr_as_groupid = FALSE;
  $consumer_type->mappings = 'a:1:{i:0;a:6:{s:12:"user_entered";s:13:"unesco member";s:4:"from";s:5:"Users";s:10:"normalized";s:13:"unesco member";s:10:"simplified";s:13:"unesco member";s:5:"valid";b:1;s:13:"error_message";s:0:"";}}';
  $consumer_type->use_filter = TRUE;
  $consumer_type->synch_to_ldap = FALSE;
  $consumer_type->synch_on_logon = TRUE;
  $consumer_type->revoke_ldap_provisioned = FALSE;
  $consumer_type->create_consumers = FALSE;
  $consumer_type->regrant_ldap_provisioned = FALSE;
  $export['drupal_role'] = $consumer_type;

  return $export;
}
