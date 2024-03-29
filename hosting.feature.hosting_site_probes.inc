<?php


/**
 * @file
 *   The hosting feature definition for the backup manager.
 */

/**
 * Register a hosting feature with Aegir.
 *
 * This will be used to generate the 'admin/hosting' page.
 *
 * @return
 *  associative array indexed by feature key.
 */
function hosting_site_probes_hosting_feature() {
  $features['site_probes'] = array(
    // title to display in form
    'title' => t('Aegir Site Probes'),
    // description
    'description' => t('Allows probing sites for usage stats (user count, node count, etc).'),
    // initial status ( HOSTING_FEATURE_DISABLED, HOSTING_FEATURE_ENABLED, HOSTING_FEATURE_REQUIRED )
    'status' => HOSTING_FEATURE_DISABLED,
    // module to enable/disable alongside feature
    'module' => 'hosting_site_probes',
    // associate with a specific node type.
    //  'node' => 'nodetype',
    // which group to display in ( null , experimental )
    'group' => 'experimental',
  );
  return $features;
}
