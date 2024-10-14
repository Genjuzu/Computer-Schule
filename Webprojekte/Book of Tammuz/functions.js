<?php
function bookoftammuz_enqueue_scripts() {
  // Lade das Haupt-JavaScript (app.js)
  wp_enqueue_script('bookoftammuz-script', get_template_directory_uri() . '/app.js', array(), null, true);

  // Lade die Haupt-CSS-Datei
  wp_enqueue_style('bookoftammuz-style', get_template_directory_uri() . '/style.css');
}
add_action('wp_enqueue_scripts', 'bookoftammuz_enqueue_scripts');
  ?>
