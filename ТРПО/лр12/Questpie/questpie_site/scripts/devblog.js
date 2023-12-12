"use strict"
var navs=document.getElementsByTagName("nav");
var color_down="rgb(255, 99, 33)";
var color_def=navs[0].children[0].style.color;
var articles=document.getElementsByTagName("article");
var hiders=new Array;
const MAX_HEIGHT = articles[0].style.maxHeight

for(let navig_sel of navs)
{navig_sel.addEventListener("mouseover",nav_down)
navig_sel.addEventListener("mouseout",nav_up)}

for(let art of articles)
{  
   art.insertAdjacentHTML("afterend",
   "<div class='hide_but'>скрыть/показать статью</div>")
}
hiders=document.getElementsByClassName('hide_but')

//hiders[0].style.color="red"
for(let hider of hiders)
{hider.addEventListener("mousedown",show_hide_art)}

function show_hide_art(handler){
   let show_hide_st = articles[Array.from(hiders).indexOf(handler.target)].style
   
   if(show_hide_st.maxHeight !=MAX_HEIGHT){show_hide_st.maxHeight =MAX_HEIGHT}
   else{show_hide_st.maxHeight ="none"}

   //даже если объявить сразу как массив
   //все равно нужно преобразование
}

function nav_down(handler)
{
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
   
   
   if(!(handler.target == handler.target.parentNode.children[0]))
   {
    handler.target.style.background=color_def
   }
}
