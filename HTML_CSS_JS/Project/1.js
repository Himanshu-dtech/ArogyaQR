let modeBtn=document.querySelector("#btn");
let by=document.querySelector("body");
let sqr=document.querySelector("#square");
let dia=document.querySelector("#diamond");
let cir=document.querySelector("#circle");
let currMod="light";


modeBtn.addEventListener("click",() => {
    if (currMod==="light") {
        currMod="dark";
        by.classList.add("dark");
        by.classList.remove("light");
        sqr.classList.add("dark");
        sqr.classList.remove("light");
        dia.classList.add("dark");
        dia.classList.remove("light");
        cir.classList.add("dark");
        cir.classList.remove("light");
    }
    else{
        currMod="light";
        by.classList.add("light");
        by.classList.remove("dark");
        sqr.classList.add("light");
        sqr.classList.remove("dark");
        dia.classList.add("light");
        dia.classList.remove("dark");
        cir.classList.add("light");
        cir.classList.remove("dark");
    }
    console.log(currMod);
});