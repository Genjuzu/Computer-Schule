// Wait until the DOM is fully loaded
document.addEventListener('DOMContentLoaded', function() {

  // 1. Smooth Scrolling for Internal Links
  const links = document.querySelectorAll('a[href^="#"]');
  for (const link of links) {
    link.addEventListener('click', smoothScroll);
  }

  function smoothScroll(event) {
    event.preventDefault();
    const targetId = this.getAttribute('href');
    const targetElement = document.querySelector(targetId);
    window.scrollTo({
      top: targetElement.offsetTop,
      behavior: 'smooth'
    });
  }

  // 2. Scroll-Triggered Fade-In Effect for sections
  const sections = document.querySelectorAll('section');
  window.addEventListener('scroll', revealSections);

  function revealSections() {
    const windowHeight = window.innerHeight;
    for (const section of sections) {
      const sectionTop = section.getBoundingClientRect().top;
      if (sectionTop < windowHeight - 100) {
        section.classList.add('visible');
      }
    }
  }

  // 3. Hero Text Glow Effect on Hover
  const heroText = document.querySelector('.hero-content h2');
  heroText.addEventListener('mouseover', function() {
    heroText.classList.add('glow');
  });
  heroText.addEventListener('mouseout', function() {
    heroText.classList.remove('glow');
  });

});

// Scroll triggered fade-in effect CSS class
document.head.insertAdjacentHTML('beforeend', `
  <style>
    .visible {
      opacity: 1;
      transform: translateY(0);
      transition: opacity 1s ease, transform 1s ease;
    }

    section {
      opacity: 0;
      transform: translateY(20px);
    }

    .glow {
      text-shadow: 0 0 10px rgba(255, 255, 255, 0.7), 0 0 20px rgba(255, 255, 255, 0.5);
    }

    .occult-symbol {
      position: fixed;
      font-size: 3em;
      color: rgba(255, 255, 255, 0.8);
      animation: fadeInOut 3s forwards;
    }

    @keyframes fadeInOut {
      0% { opacity: 0; transform: scale(0); }
      25% { opacity: 1; transform: scale(1.2); }
      50% { opacity: 1; }
      75% { opacity: 0.5; }
      100% { opacity: 0; transform: scale(0); }
    }
  </style>
`);
