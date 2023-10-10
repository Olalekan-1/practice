const nav_contents = document.querySelectorAll(".nav-content")

function active_button()
{
    let current_btn = document.querySelector(".active");
    current_btn.className = current_btn.className.replace("active", "");
    this.className += " active";
}

function page_transit()
{
  for (let i = 0; i < nav_contents.length; i++)
  {
    nav_contents[i].addEventListener('click', active_button)
  }
  
}

page_transit()