const loadingMessages=[

"Initializing Firewall...",

"Scanning Network...",

"Encrypting Data...",

"Loading AI Scanner...",

"Securing Connection...",

"Launching Cyber Hub..."

];

const loadingText=document.getElementById("loadingText");

let index=0;

const changeText=setInterval(()=>{

index++;

if(index<loadingMessages.length){

loadingText.innerHTML=loadingMessages[index];

}

},650);

window.addEventListener("load",()=>{

setTimeout(()=>{

document.getElementById("loader").style.opacity="0";

document.getElementById("loader").style.visibility="hidden";

clearInterval(changeText);

},4200);

});
