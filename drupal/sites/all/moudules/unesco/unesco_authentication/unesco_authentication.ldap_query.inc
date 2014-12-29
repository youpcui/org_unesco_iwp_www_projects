<?php
/**
 * @file
 * unesco_authentication.ldap_query.inc
 */

/**
 * Implements hook_default_ldap_query().
 */
function unesco_authentication_default_ldap_query() {
  $export = array();

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'unesco_fu_members';
  $qid->name = 'UNESCO FU Members';
  $qid->sid = 'ldap_fu_unesco';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=UNESCO,DC=fu,DC=int,DC=unesco,DC=org
OU=BRZ,OU=UNESCO,DC=fu,DC=int,DC=unesco,DC=org
OU=KAT,OU=UNESCO,DC=fu,DC=int,DC=unesco,DC=org
OU=TEH,OU=UNESCO,DC=fu,DC=int,DC=unesco,DC=org';
  $qid->filter = '(&(objectClass=organizationalPerson)(|(description=Staff*)(description=Cnslt*)(description=Surnu*)(description=FU*)))';
  $qid->attributes_str = 'mail,unesco-grade,givenname,sn,samaccountname,physicaldeliveryoffice,telephonenumber,unesco-titleposten,department,accountExpires,thumbnailphoto,personaltitle';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['unesco_fu_members'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'unesco_fu_uis_member';
  $qid->name = 'UNESCO FU UIS Members';
  $qid->sid = 'ldap_fu_uis_unesco';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=UIS,DC=uis,DC=fu,DC=int,DC=unesco,DC=org';
  $qid->filter = '(&(objectClass=organizationalPerson)(|(description=Staff*)(description=Cnslt*)(description=Surnu*)(description=FU*)))';
  $qid->attributes_str = 'mail,unesco-grade,givenname,sn,samaccountname,physicaldeliveryoffice,telephonenumber,unesco-titleposten,department,accountExpires,thumbnailphoto,personaltitle';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['unesco_fu_uis_member'] = $qid;

  $qid = new stdClass();
  $qid->disabled = FALSE; /* Edit this to true to make a default qid disabled initially */
  $qid->api_version = 1;
  $qid->qid = 'unesco_members';
  $qid->name = 'UNESCO Members';
  $qid->sid = 'ldap_unesco';
  $qid->status = TRUE;
  $qid->base_dn_str = 'OU=UNESCO,DC=hq,DC=int,DC=unesco,DC=org';
  $qid->filter = '(&(objectClass=organizationalPerson)(|(description=Staff*)(description=Cnslt*)(description=Surnu*)(description=FU*)))';
  $qid->attributes_str = 'mail,unesco-grade,givenname,sn,samaccountname,physicaldeliveryoffice,telephonenumber,unesco-titleposten,department,accountExpires,thumbnailphoto,personaltitle';
  $qid->sizelimit = 0;
  $qid->timelimit = 0;
  $qid->deref = FALSE;
  $qid->scope = TRUE;
  $export['unesco_members'] = $qid;

  return $export;
}
