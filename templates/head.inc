<?php

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

// add the path to styles/scripts directory
$styles = $config->urls->templates . 'styles'; 
$scripts = $config->urls->templates . 'scripts'; 

?>

<!DOCTYPE html>
<html lang="en">
<head>

	<title><?php echo $browserTitle; ?></title>
	<meta charset="utf-8" />
	<meta http-equiv="x-ua-compatible" content="ie=edge" />
	<meta name="viewport" content="width=device-width, initial-scale=1, minimum-scale=1, maximum-scale=1" />
	<meta name="description" content="" />
	<meta name="copyright" content="" />
	<!--[if lt IE 9]>
	  <script src='<?php echo $scripts ?>/html5.js'></script>
	<![endif]-->
	<!--[if (gt IE 8) | (IEMobile)]><!-->
	  <link rel="stylesheet" href='<?php echo $styles ?>/unsemantic-grid-responsive.css' />
	<!--<![endif]-->
	<!--[if (lt IE 9) & (!IEMobile)]>
	  <link rel="stylesheet" href='<?php echo $styles ?>/ie.css' />
	<![endif]-->
	<link rel="stylesheet" href='<?php echo $styles ?>/screen.css' />

	<!-- uncomment and fill font family for google webfonts -->
	<!-- link rel="stylesheet" href='http://fonts.googleapis.com/css?family=Your font family' /> -->

	<script src='https://ajax.googleapis.com/ajax/libs/jquery/1.9.1/jquery.min.js'></script>
	<!-- uncomment for placeholder images https://github.com/imsky/holder -->
	<script src='<?php echo $scripts ?>/holder.js'></script>

</head>