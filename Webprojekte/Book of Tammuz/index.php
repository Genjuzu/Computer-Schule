<?php
get_header(); // Fügt das Header-Template ein

// Hauptinhalt
?>
<main>
  <h1>Willkommen bei Book of Tammuz</h1>
  <p>Dies ist dein Custom WordPress Theme!</p>
</main>
<?php

get_footer(); // Fügt das Footer-Template ein
?>

<!doctype html>
<html <?php language_attributes(); ?>>

<head>
  <meta charset="<?php bloginfo('charset'); ?>">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <title><?php bloginfo('name'); ?> - <?php is_front_page() ? bloginfo('description') : wp_title(''); ?></title>

  <?php wp_head(); ?>
</head>

<body <?php body_class(); ?>>

<header class="custom-header">
  <nav class="main-menu">
    <ul>
      <li><a href="#home">START</a></li>

      <!-- Dropdown für Kapitel -->
      <li class="dropdown">
        <a href="#chapters" class="dropdown-btn">KAPITEL</a>
        <ul class="dropdown-content">
          <li><a href="#chapter1">00-10</a></li>
          <li><a href="#chapter2">10-19</a></li>
          <li><a href="#chapter3">20-29</a></li>
          <li><a href="#chapter4">30-39</a></li>
          <li><a href="#chapter5">40-49</a></li>
          <li><a href="#chapter6">50-59</a></li>
          <li><a href="#chapter7">60-69</a></li>
          <li><a href="#chapter8">70-79</a></li>
          <li><a href="#chapter9">80-89</a></li>
          <li><a href="#chapter10">90-99</a></li>
        </ul>
      </li>

      <!-- Dropdown für Extras -->
      <li class="dropdown">
        <a href="#extras" class="dropdown-btn">EXTRAS</a>
        <ul class="dropdown-content">
          <li><a href="#bonus1">ARTWORK</a></li>
          <li><a href="#bonus2">WIKI</a></li>
        </ul>
      </li>

      <!-- Dropdown für Soundtrack -->
      <li class="dropdown">
        <a href="#soundtrack" class="dropdown-btn">SOUNDTRACK</a>
        <ul class="dropdown-content">
          <li><a href="#track1">SPOTIFY</a></li>
          <li><a href="#track2">YOUTUBE</a></li>
        </ul>
      </li>

      <!-- Dropdown für About -->
      <li class="dropdown">
        <a href="#about" class="dropdown-btn">ABOUT</a>
        <ul class="dropdown-content">
          <li><a href="#team">Team</a></li>
          <li><a href="#history">History</a></li>
        </ul>
      </li>
    </ul>
  </nav>
</header>

<section class="hero" id="home">
  <div class="hero-content">
    <h2>WILLKOMMEN IN NARAKA</h2>
    <a href="sites/Kapitel/00-09/kapitel 1/index.html" class="button">BEGINNE DIE REISE</a>
  </div>
</section>

<section class="autor-section" id="about">
  <h2>Über das Werk</h2>
  <p>Welcome to the world of hidden knowledge and alchemical mysteries...</p>
</section>

<?php wp_footer(); ?>
</body>
</html>
