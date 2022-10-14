Image (field) Crop
===================

Imagefield Crop provides selection based cropping for an image after upload.

After an image is uploaded, it is presented inside a cropping area. A cropping 
box is shown inside, and the user can resize and move the box. Upon clicking 
"preview" or "submit", the image is cropped and the cropped image is saved 
instead of the original image.

Features: 
- Seamless, intuitive cropping, almost like using a desktop photo editing app.
- All major browsers are supported.
- Dynamic preview: you see how your crop will look, in real time!
- The original image is also saved (for re-cropping).
- No matter the dimensions of the cropping area, the original image is used for 
  cropping (for highest quality).
- The size of the cropping area, cropping box, and resulting image can be 
  defined by the administrator.
  

Requirements <!-- Do not include this section if there are no requirements. -->
------------

This module requires that the core **Image** module is also enabled.


Installation <!-- This section is required. -->
------------

- Install this module using the official Backdrop CMS instructions at
  https://docs.backdropcms.org/documentation/extend-with-modules.

- Configure any image field under Administration > Structure > Content Types >
 (admin/structure/types) and provide the output size and crop area.

- Edit your content, and crop your image to the desired size.


Issues <!-- This section is required. -->
------

Bugs and feature requests should be reported in [the Issue Queue](https://github.com/backdrop-contrib/imagefield_crop/issues).

Current Maintainers <!-- This section is required. -->
-------------------

- [Jen Lampton](https://github.com/jenlampton).
- Seeking additional maintainers.

Credits <!-- This section is required. -->
-------

- Ported to Backdrop CMS by [Jen Lampton](https://github.com/jenlampton).
- Originally written for Drupal by [yhager](https://www.drupal.org/u/yhager).
- Maintained for Drupal by [ram4nd](https://www.drupal.org/u/ram4nd).
- Also maintained for Drupal by [joetsuihk](https://www.drupal.org/u/joetsuihk)
- Based on the [Jcrop](https://jcrop.com/) JavaScript library.
- Port to Backdrop CMS sponsored by [David Bollier](https://bollier.org)

License <!-- This section is required. -->
-------

* This project is GPL v2 software. 
  See the LICENSE.txt file in this directory for complete text.

* The Jcrop JavaScript library is provided under the MIT License. 
  See the MIT-LICENSE.txt file in the Jcrop directory for complete text.


