<?php


/**
 * Toplevel navigation requires Soma's MarkupSimpleNavigation Module: https://github.com/somatonic/MarkupSimpleNavigation.git
 *
 */

// include Markup Simple Navigation Menu Module
$mainnav = $modules->get("MarkupSimpleNavigation");

// set options for mainnav

$navoptions = array(
	'collapsed' => false,
	'show_root' => true,
	'levels' => true,
	'max_levels' => 2,
	'outer_tpl' => '<ul class="sf-menu">||</ul>',
	'firstlast' => true
);

// Mobile navigation for screens < 768 px (iPad portrait)


$mobilenav = $modules->get("MarkupSimpleNavigation");

// set options for mobilenav

$mobileoptions = array(
    'collapsed' => false,
    'show_root' => true,
    'levels' => true,
    'max_levels' => 2
);


/**
* Shared functions
**/

// Output subnavigation

function renderSubnav() {

	if($page->path != '/' && $page->numChildren > 0) { 

		// We have determined that we're not on the homepage
		// and that this page has child pages, so make navigation: 

		echo "<nav id='subnav'>";
		echo "<h2>Subnav</h2>";
		echo "<ul class='nav'>";

		foreach($page->children as $child) {
			$class = $page === $child ? " class='on'" : '';
			echo "<li><a$class href='{$child->url}'>{$child->title}</a></li>";	
		}
	}

	echo "</ul>";
	echo "</nav>";
}