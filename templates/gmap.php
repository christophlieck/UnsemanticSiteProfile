<?php

// this template is just there for Google Maps


$headline = "<h1 id='title'>" . $page->get("headline|title") . "</h1>";
$content = file_get_contents("./_gmap.inc");

$sidebar = "<div class='sidebar_item'>";
if($page->sidebar) $sidebar .= $page->sidebar; 
else $sidebar .= $homepage->sidebar;
$sidebar .= "</div>";

$sidebar .= renderSubnav();

include("./_main.inc");