let mode=document.querySelector("button");
let current="white";
let body=document.querySelector("body");
let h3=document.getElementsByClassName("fs-2");


mode.addEventListener("click",()=>{
    if (current === "white"){
        current="dark";
        body.style.backgroundColor="black";
        body.style.color="white";
        h3.style.color="white";


    }else {
        current="white"
        body.style.backgroundColor="white";
        body.style.color="black";

    }
})
