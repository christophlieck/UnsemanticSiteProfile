<?php

/**
 * Search template
 *
 */

$out = '';

if($q = $sanitizer->selectorValue($input->get->q)) {

	// Send our sanitized query 'q' variable to the whitelist where it will be
	// picked up and echoed in the search box by the head.inc file.
	$input->whitelist('q', $q); 

	// Search the title, body and sidebar fields for our query text.
	// Limit the results to 50 pages. 
	// Exclude results that use the 'admin' template. 
	$matches = $pages->find("title|body|sidebar~=$q, limit=50"); 

	$count = count($matches); 

	if($count) {
		$out .= "<h2>Found $count pages matching your query:</h2>" . 
			"<ul class='nav'>";

		foreach($matches as $m) {
			$out .= "<li><p><a href='{$m->url}'>{$m->title}</a><br />{$m->summary}</p></li>";
		}

		$out .= "</ul>";

	} else {
		$out .= "<h2>Sorry, no results were found.</h2>";
	}
} else {
	$out .= "<h2>Please enter a search term in the search box (upper right corner)</h2>";
}

// Note that we stored our output in $out before printing it because we wanted to execute
// the search before including the header template. This is because the header template 
// displays the current search query in the search box (via the $input->whitelist) and 
// we wanted to make sure we had that setup before including the header template.

$content = $out;

include("./_main.inc");


/*
<?php include("./head.inc"); ?>
<body class='<?php echo "$pageClass"; ?>'>
	<div class="grid-container">
		<?php include("./header.inc"); ?>
		<div id="main" class="grid-66 prefix-33 mobile-grid-100">
			<h1 id='title'><?php echo $page->get("headline|title"); ?></h1>
			<?php echo "$out"; ?>
		</div>
		<footer class=grid-100>
			<p>Powered by <a href='http://processwire.com'>ProcessWire Open Source CMS/CMF</a> &copy; <?php echo date("Y"); ?> <a href="http://www.ryancramer.com">Ryan Cramer Design, LLC</a></p>
		</footer>
	</div>
</body>
</html>

*/

?>