<?php

/**
 * _init.php - Initialize site variables and includes. 
 *
 * This file is called before any template files are rendered
 * This behavior was defined in /site/config.php - $config->prependTemplateFile
 *
 */


// We pull some data from the homepage in a few places in this main template, so we keep it ready here
$homepage = $pages->get('/');
$pageClass = $page->name;
$sectionClass = $page->rootParent->name;
$titleVar = $page->rootParent->title;
$templateClass = $page->template;

if(empty($content)) $content = $page->body;

// determine what the ever important browser <title> tag should be
if($page->browser_title) $browserTitle = $page->browser_title; 
else if($page === $homepage) $browserTitle = $page->headline; 
else $browserTitle = $page->title . ' &bull; ' . $homepage->headline;

// set the meta description
if($page->meta_description) $metaDescription = $page->meta_description;
elseif ($page->body) $metaDescription = strip_tags(substr($page->body, 0, 155));
else $metaDescription = 'Your fallback description';

// add the path to styles/scripts directory
$styles = $config->urls->templates . 'styles'; 
$scripts = $config->urls->templates . 'scripts';


/*
 * Include shared functions we want to utilize in all our templates
 *
 */
require_once("./_functions.inc"); 