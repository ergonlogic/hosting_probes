<?php


/**
 * @file
 * The hosting feature definition for CPU count module.
 */

/**
 * Register a hosting feature with Aegir.
 *
 * This will be used to generate the 'admin/hosting' page.
 *
 * @return array
 *   associative array indexed by feature key.
 */
function hosting_cpu_count_hosting_feature() {
  $features['cpu_count'] = array(
    'title' => t('CPU count'),
    'description' => t('Count the CPUs running on this Aegir install.'),
    'status' => HOSTING_FEATURE_DISABLED,
    'module' => 'hosting_cpu_count',
    'group' => 'experimental',
  );
  return $features;
}
