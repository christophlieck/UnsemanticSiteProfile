<?php include("./_head.inc"); ?>
<body class='<?php echo "$pageClass"; ?> template-<?php echo $page->template; ?>'>
	<div class="grid-container">
		<?php include("./_masthead.inc"); ?>
		<div id="main" class="grid-66 push-33 mobile-grid-100">
			<?php 
			echo $headline;
			echo $content;
			?>
		</div>
		<aside class="grid-33 pull-66 mobile-grid-100">
			<?php
			echo $sidebar;
			?>
		</aside> <!-- /aside -->
		<?php include("./_teaser.inc"); ?>
		<footer class=grid-100>
			<p>Powered by <a href='http://processwire.com'>ProcessWire Open Source CMS/CMF</a> &copy; <?php echo date("Y"); ?> <a href="http://www.ryancramer.com">Ryan Cramer Design, LLC</a></p>
		</footer>
	</div>
</body>
</html>