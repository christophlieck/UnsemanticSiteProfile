<!DOCTYPE html>
<html lang="en">
<head>

	<title><?php echo $browserTitle; ?></title>
	<meta charset="utf-8" />
	<meta http-equiv="x-ua-compatible" content="ie=edge" />
	<meta name="viewport" content="width=device-width, initial-scale=1, minimum-scale=1, maximum-scale=1" />
	<meta name="description" content='<?php echo $metaDescription; ?>' />
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
	<script src='<?php echo $scripts ?>/main.js'></script>
	<!-- Superfish JS/CSS Dropdown http://users.tpg.com.au/j_birch/plugins/superfish/ -->
	<script src='<?php echo $scripts ?>/superfish.js'></script>

</head>