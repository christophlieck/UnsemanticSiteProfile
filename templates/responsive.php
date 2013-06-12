<?php include("./head.inc"); ?>
<body class='<?php echo "$pageClass"; ?>'>
	<div class="grid-container">
		<?php include("./header.inc"); ?>
		<div id="main" class="grid-66 push-33 mobile-grid-100">
			<h1 id='title'><?php echo $page->get("headline|title"); ?></h1>
			<?php echo "{$page->body}"; ?>
		</div>
		<aside class="grid-33 pull-66 mobile-grid-100">
			<div class='sidebar_item'>
				<?php

						// if the current page has a populated 'sidebar' field, then print it,
						// otherwise print the sidebar from the homepage
				
				if($page->sidebar) echo $page->sidebar; 
				else echo $homepage->sidebar; 
				?>
			</div> <!-- /sidebar-item -->
			<?php

				// Output subnavigation

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

				echo "</ul>";
				echo "</nav>";
			}
			?>

		</aside> <!-- /aside -->
		<div class="clear"></div>
		<!-- include three teaser boxes here if needed -->
		<?php include("./teaser.inc"); ?>
		<footer class=grid-100>
			<p>Powered by <a href='http://processwire.com'>ProcessWire Open Source CMS/CMF</a> &copy; <?php echo date("Y"); ?> <a href="http://www.ryancramer.com">Ryan Cramer Design, LLC</a></p>
		</footer>
	</div>
</body>
</html>