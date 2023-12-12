"use strict"
var navs=document.getElementsByTagName("nav");
var color_down="rgb(255, 99, 33)";
var color_def=navs[0].children[0].style.color;


for(let navig_sel of navs)
{navig_sel.addEventListener("mouseover",nav_down)
navig_sel.addEventListener("mouseout",nav_up)}


function nav_down(handler)
{//for(let child_div of handler.target.firstChild){child_div.style.display="block"}
   // if(handler.target.tagname=="NAV"){alert(handler.target.tagname=="NAV")}
   //handler.target.style.color="red"
   for(let kiddivs of handler.target.parentNode.children){kiddivs.style.display="block"}
  
   if(!(handler.target == handler.target.parentNode.children[0]))
   {
    handler.target.style.background=color_down
   }
}
function nav_up(handler)
{
   for(let kiddiv of handler.target.parentNode.children)
   {
    if(!(kiddiv == handler.target.parentNode.children[0])){kiddiv.style.display="none"}
    }
   //handler.target.parentNode.children[0].style.display="block"
   
   if(!(handler.target == handler.target.parentNode.children[0]))
   {
    handler.target.style.background=color_def
   }
}
