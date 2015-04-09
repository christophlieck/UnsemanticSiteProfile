$(document).ready(function() {
	// Initialise Superfish Dropdown
	jQuery('ul.sf-menu').superfish();
	
	// Textformatter Accordion Module
	$('body').on('click', 'dl.accordion > dt > a', function (){
	    $(this).toggleClass('open');
	    $(this).parent().next('dd').slideToggle("fast");
	    return false;
	});
});

// Setup Google Maps

function initialize() {

	    var location = new google.maps.LatLng(50.941276422090795, 6.958304494165077); // http://www.cantamen.de/geocoder.php?lang=de
	 
	    var myOptions = {
	        zoom: 13,
	        center: location,
	        zoomControl: true,
	        zoomControlOptions: {
	          style: google.maps.ZoomControlStyle.SMALL
	        },
	        mapTypeControl: false,
	        panControl: false,
	        rotateControl: false,
	        maxZoom: 16,
	    	mapTypeId: google.maps.MapTypeId.ROADMAP
	        };

	    var map = new google.maps.Map(document.getElementById("gmap"), myOptions);

		var marker = new google.maps.Marker({
		    position: location,
		    title:"Cathedral, Cologne, Germany"
		});

		marker.setMap(map);


	} // function initialize 
