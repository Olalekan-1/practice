const sections = document.querySelectorAll(".section");
const sectbtns = document.querySelectorAll(".controls");
const sectbtn = document.querySelectorAll(".control");
const allsections = document.querySelector(".main-content");


function active_btn()
{
    let current_btn = document.querySelector(".active-btn");
    if (current_btn){
        current_btn.classList.remove("active-btn")
    }
    this.classList.add("active-btn")
}

/* function active_section()
{
    allsections.addEventListener("click", (event)=>{
        const id = event.target.dataset.id;
        if (id)
        {
            sectbtns.forEach((btn) => {
                btn.classList.remove("active") 
            })
            
            event.target.classList.add("active")

        sections.forEach((section) => {
            section.classList.remove("active")
         } )

         const element = document.getElementById(id);

         element.classList.add('active');
        }
    })  

} */

function theme_ctrl(){
    const themeBtn = document.querySelector(".theme-control")
    themeBtn.addEventListener("click", ()=>{
        let element = document.body
        element.classList.toggle("visible")
    })
}

function page_trasit(){
    for (let i = 0; i < sectbtn.length; i++)
    {
        sectbtn[i].addEventListener("click", active_btn)
    }


    allsections.addEventListener("click", (event)=> {
        const id = event.target.dataset.id;
        if (id)
        {
            sectbtns.forEach((btn) => {
                btn.classList.remove("active") 
            })
            
        event.target.classList.add("active")

        sections.forEach((section) => {
            section.classList.remove("active")
         } )

         const element = document.getElementById(id);

         element.classList.add('active');
        }
    }) 

    theme_ctrl()
    
}

page_trasit()