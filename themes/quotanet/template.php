<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
 
 function quotanet_file_icon($variables) {
   $file = $variables['file'];
   $icon_directory = $variables['icon_directory'];
 
   $mime = check_plain($file->filemime);
   $icon_url = file_icon_url($file, $icon_directory);
   return '<img class="file-icon" alt="" title="' . $mime . '" src="' . base_path() . path_to_theme() . '/images/' . 'icon_download.png" />';
 }