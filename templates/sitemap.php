<?php include("./head.inc"); ?>

<body class='<?php echo "$pageClass"; ?>'>
	<div class="grid-container">
		<?php include("./header.inc"); ?>
		<div id="main" class="grid-66 prefix-33 mobile-grid-100">
			<h1 id='title'><?php echo $page->get("headline|title"); ?></h1>
			<?php

			function sitemapListPage($page) {

				echo "<li><a href='{$page->url}'>{$page->title}</a> ";	

				if($page->numChildren) {
					echo "<ul>";
					foreach($page->children as $child) sitemapListPage($child); 
					echo "</ul>";
				}

				echo "</li>";
			}

			echo "<ul class='sitemap'>";
			sitemapListPage($pages->get("/")); 
			echo "</ul>";
			?>
		</div>
		<footer class=grid-100>
			<p>Powered by <a href='http://processwire.com'>ProcessWire Open Source CMS/CMF</a> &copy; <?php echo date("Y"); ?> <a href="http://www.ryancramer.com">Ryan Cramer Design, LLC</a></p>
		</footer>
	</div>
</body>
</html>
