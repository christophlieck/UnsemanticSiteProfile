<header>
	<nav id='topnav' class='grid-66' role='navigation'>
		<?php echo $mainnav->render($navoptions); ?>
	</nav>
	<!-- Site Search -->
	<div id="site-search" class="grid-33 hide-on-mobile">
	<?php
	$searchPage = wire('pages')->get('template=search');
	$searchQuery = htmlentities(wire('input')->whitelist('q'), ENT_QUOTES, "UTF-8");
	?>
		<form id='site-search-form' class='clearfix' action='<?php echo $searchPage->url; ?>' method='get'>
			<ul>
				<li>
					<input type='text' name='q' value='<?php echo $searchQuery; ?>' placeholder='<?php echo $searchPage->title; ?>'>
				</li>
				<li>
					<button type="submit" id="search_submit">Search</button>
				</li>
			</ul>
		</form>
	</div>

	<div id="billboard" class='grid-100 hide-on-mobile'>
		<img src="holder.js/1200x336/gray" alt="my fancy billboard">
	</div>
	<nav id='breadcrumb' class="grid-100 hide-on-mobile">
		<ul><?php

			// Create breadcrumb navigation by cycling through the current $page's
			// parents in order, linking to each:

			foreach($page->parents as $parent) {
				echo "<li><a href='{$parent->url}'>{$parent->title}</a> &gt; </li>";
			}

		?></ul>
	</nav>
	
</header>