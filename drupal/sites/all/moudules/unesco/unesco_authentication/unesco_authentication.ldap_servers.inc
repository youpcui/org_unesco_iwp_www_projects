<?php
/**
 * @file
 * unesco_authentication.ldap_servers.inc
 */

/**
 * Implements hook_default_ldap_servers().
 */
function unesco_authentication_default_ldap_servers() {
  $export = array();

  $ldap_servers_conf = new stdClass();
  $ldap_servers_conf->disabled = FALSE; /* Edit this to true to make a default ldap_servers_conf disabled initially */
  $ldap_servers_conf->api_version = 1;
  $ldap_servers_conf->sid = 'ldap_unesco';
  $ldap_servers_conf->name = 'LDAP UNESCO';
  $ldap_servers_conf->status = TRUE;
  $ldap_servers_conf->ldap_type = 'ad';
  $ldap_servers_conf->address = 'ldap.hq.int.unesco.org';
  $ldap_servers_conf->port = 389;
  $ldap_servers_conf->tls = FALSE;
  $ldap_servers_conf->bind_method = 1;
  $ldap_servers_conf->binddn = 'ad_read';
  $ldap_servers_conf->bindpw = 'Yr3fT$7!';
  $ldap_servers_conf->basedn = array(
    0 => 'OU=UNESCO,DC=hq,DC=int,DC=unesco,DC=org',
  );
  $ldap_servers_conf->user_attr = 'sAMAccountName';
  $ldap_servers_conf->account_name_attr = '';
  $ldap_servers_conf->mail_attr = 'mail';
  $ldap_servers_conf->mail_template = '';
  $ldap_servers_conf->allow_conflicting_drupal_accts = FALSE;
  $ldap_servers_conf->unique_persistent_attr = '';
  $ldap_servers_conf->user_dn_expression = '';
  $ldap_servers_conf->ldap_to_drupal_user = '';
  $ldap_servers_conf->testing_drupal_username = 'd_pitzalis';
  $ldap_servers_conf->group_object_category = '';
  $ldap_servers_conf->search_pagination = TRUE;
  $ldap_servers_conf->search_page_size = 1000;
  $ldap_servers_conf->weight = 0;
  $export['ldap_unesco'] = $ldap_servers_conf;

  $ldap_servers_conf = new stdClass();
  $ldap_servers_conf->disabled = FALSE; /* Edit this to true to make a default ldap_servers_conf disabled initially */
  $ldap_servers_conf->api_version = 1;
  $ldap_servers_conf->sid = 'ldap_fu_unesco';
  $ldap_servers_conf->name = 'LDAP UNESCO FU';
  $ldap_servers_conf->status = TRUE;
  $ldap_servers_conf->ldap_type = 'ad';
  $ldap_servers_conf->address = 'fu-dc01.fu.int.unesco.org';
  $ldap_servers_conf->port = 389;
  $ldap_servers_conf->tls = FALSE;
  $ldap_servers_conf->bind_method = 1;
  $ldap_servers_conf->binddn = 'ad_read';
  $ldap_servers_conf->bindpw = 'Yr3fT$7!';
  $ldap_servers_conf->basedn = array(
    0 => 'OU=UNESCO,DC=fu,DC=int,DC=unesco,DC=org',
  );
  $ldap_servers_conf->user_attr = 'sAMAccountName';
  $ldap_servers_conf->account_name_attr = '';
  $ldap_servers_conf->mail_attr = 'mail';
  $ldap_servers_conf->mail_template = '';
  $ldap_servers_conf->allow_conflicting_drupal_accts = FALSE;
  $ldap_servers_conf->unique_persistent_attr = '';
  $ldap_servers_conf->user_dn_expression = '';
  $ldap_servers_conf->ldap_to_drupal_user = '';
  $ldap_servers_conf->testing_drupal_username = '';
  $ldap_servers_conf->group_object_category = '';
  $ldap_servers_conf->search_pagination = TRUE;
  $ldap_servers_conf->search_page_size = 1000;
  $ldap_servers_conf->weight = 0;
  $export['ldap_fu_unesco'] = $ldap_servers_conf;

  $ldap_servers_conf = new stdClass();
  $ldap_servers_conf->disabled = FALSE; /* Edit this to true to make a default ldap_servers_conf disabled initially */
  $ldap_servers_conf->api_version = 1;
  $ldap_servers_conf->sid = 'ldap_fu_uis_unesco';
  $ldap_servers_conf->name = 'LDAP UNESCO FU UIS';
  $ldap_servers_conf->status = TRUE;
  $ldap_servers_conf->ldap_type = 'ad';
  $ldap_servers_conf->address = 'uis-dc01-hqsite.uis.fu.int.unesco.org';
  $ldap_servers_conf->port = 389;
  $ldap_servers_conf->tls = FALSE;
  $ldap_servers_conf->bind_method = 1;
  $ldap_servers_conf->binddn = 'ad_read';
  $ldap_servers_conf->bindpw = 'Yr3fT$7!';
  $ldap_servers_conf->basedn = array(
    0 => 'OU=UIS,DC=uis,DC=fu,DC=int,DC=unesco,DC=org',
  );
  $ldap_servers_conf->user_attr = 'sAMAccountName';
  $ldap_servers_conf->account_name_attr = '';
  $ldap_servers_conf->mail_attr = 'mail';
  $ldap_servers_conf->mail_template = '';
  $ldap_servers_conf->allow_conflicting_drupal_accts = FALSE;
  $ldap_servers_conf->unique_persistent_attr = '';
  $ldap_servers_conf->user_dn_expression = '';
  $ldap_servers_conf->ldap_to_drupal_user = '';
  $ldap_servers_conf->testing_drupal_username = 'd_pitzalis';
  $ldap_servers_conf->group_object_category = '';
  $ldap_servers_conf->search_pagination = TRUE;
  $ldap_servers_conf->search_page_size = 1000;
  $ldap_servers_conf->weight = 0;
  $export['ldap_fu_uis_unesco'] = $ldap_servers_conf;

  return $export;
}
