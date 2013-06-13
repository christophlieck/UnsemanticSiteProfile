# About Unsemantic Site Profile
This is a basic site profile for Processwire CMS Framework (http://processwire.com/) based on the fully responsive Unsemantic Grid System (http://unsemantic.com/). It is meant as a starting point for quick development of responsive designs and/or mockups in Processwire.

As Unsemantic grid system does, the profile takes advantage of the SASS CSS preprocessor (http://sass-lang.com/) and the Compass authoring framework for SASS (http://compass-style.org/). Though not mandatory, I recommend installing SASS and Compass to benefit from the full potential of the profile.

Here is what you get:

* a fully responsive grid system with backwards compatibilty down to IE7
* very basic styling aligned to an em-based baseline grid
* placeholder images via holder.js (https://github.com/imsky/holder) for easy prototyping
* quick and easy incorporation of SASS via Compass
* the pleasure to work with the best CMS framework out there

For an example of the site profile in action, see http://pcwcompass.contao-webservice.de/

## Prerequisites
NOTE: It is not necessary but recommended to install Ruby and Compass. If you prefer "classic" CSS skip this step.

### Install Ruby
In order to install SASS/Compass you need to have Ruby installed on your machine. Mac OS users got Ruby pre-installed with their OS, Windows users may want to use this easy-to-use installer: http://rubyinstaller.org/. Make sure, you activate "Add Ruby executables to your PATH" when the installer prompts for it.

### Install Compass
Once Ruby is present on your machine, you are ready to install Compass/SASS. Open a command line and enter

	gem install compass

or (Mac OS)

	sudo gem install compass

That' it. You are done.

## Install the Profile
Grab a copy of the latest ProcessWire (http://processwire.com/). Replace the install, modules and templates directories with those in this profile, as shown below:

* /site-default/install/
* /site-default/modules/
* /site-default/templates/

Do NOT transfer the directory /sass/ and the config.rb file to your server. Both remain on your local machine during development. See explanation below.

### Developing with the profile
If you decided to develop with Compass/SASS edit the .scss files you find in UnsemanticSiteProfile/sass. Once you are done, you need to compile it to regular .css files. Please see this tutorial or the Compass project site to learn how to do that: http://leveluptuts.com/tutorials/compass-tutorials/2-adding-and-using-compass

If you don't use Compass/SASS just edit the files in templates/styles as usual with ProcessWire.

## License
The profile is licensed under MIT (http://opensource.org/licenses/mit-license.php) and GNU (http://www.gnu.org/licenses/gpl.html) aus Unsemantic is. However, the following works of others are incorporated and you have to respect the according licenses (if any):

* Basic Site Profile that comes with ProcessWire, licensed under GNU
* EmailObfuscator by Somartist (https://github.com/somatonic/EmailObfuscator)
* After Save Actions by nikala (https://github.com/niklaka/AfterSaveActions)
* Holder by Ivan Malopinsky (https://github.com/imsky/holder), licensed under Apache 2.0 (http://www.apache.org/licenses/LICENSE-2.0). Commercial use requires attention!