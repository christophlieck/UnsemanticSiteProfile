<?php if(count($page->contentTeaser) === 3): // three teasers are required ?> 
<div class="clear"></div>
<?php foreach($page->contentTeaser as $teaser): ?>
<div class="grid-33">
	<div class="teaser">
		<h3><?php echo "{$teaser->headline}"; ?></h3>
		<?php echo "{$teaser->body}"; ?>
	</div>
</div>
<?php endforeach; ?> <!-- /contentTeaser -->
<div class="clear"></div>
<?php endif; ?> <!-- check for content/Teaser -->