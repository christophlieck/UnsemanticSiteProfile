<?php

$headline = "<h1 id='title'>" . $page->get("headline|title") . "</h1>";
$content = $page->body;

$sidebar = "<div class='sidebar_item'>";
if($page->sidebar) $sidebar .= $page->sidebar; 
else $sidebar .= $homepage->sidebar;
$sidebar .= "</div>";

$sidebar .= renderSubnav();

$teaser = true;

include("./_main.inc");