* LOADER */

#loader{

position:fixed;

top:0;

left:0;

width:100%;

height:100vh;

background:#020611;

display:flex;

justify-content:center;

align-items:center;

overflow:hidden;

z-index:999999;

transition:1s;

}

/* Matrix Background */

.matrix{

position:absolute;

width:100%;

height:100%;

background-image:

linear-gradient(rgba(0,255,255,.08) 1px,transparent 1px),

linear-gradient(90deg,rgba(0,255,255,.08) 1px,transparent 1px);

background-size:40px 40px;

animation:gridMove 8s linear infinite;

}

@keyframes gridMove{

0%{

transform:translateY(0);

}

100%{

transform:translateY(40px);

}

}

.loader-box{

position:relative;

text-align:center;

z-index:10;

}

.shield{

font-size:90px;

animation:pulse 2s infinite;

filter:drop-shadow(0 0 25px cyan);

}

@keyframes pulse{

0%{

transform:scale(1);

}

50%{

transform:scale(1.15);

}

100%{

transform:scale(1);

}

}

.loader-box h1{

color:white;

font-size:50px;

letter-spacing:8px;

margin-top:20px;

text-shadow:0 0 25px cyan;

}

.loader-box p{

color:#9ec9ff;

margin-top:20px;

font-size:18px;

letter-spacing:2px;

}

.progress{

width:350px;

height:10px;

background:#0f1d35;

border-radius:50px;

margin-top:25px;

overflow:hidden;

}

.progress-bar{

height:100%;

width:0%;

background:linear-gradient(90deg,#00ffff,#008cff);

animation:loading 4s forwards;

box-shadow:0 0 20px cyan;

}

@keyframes loading{

100%{

width:100%;

}

}

/* Rings */

.rings{

position:absolute;

top:-20px;

left:50%;

transform:translateX(-50%);

}

.ring{

position:absolute;

border:2px solid cyan;

border-radius:50%;

opacity:.4;

}

.ring1{

width:160px;

height:160px;

left:-80px;

top:-20px;

animation:rotate 10s linear infinite;

}

.ring2{

width:210px;

height:210px;

left:-105px;

top:-45px;

animation:rotateReverse 12s linear infinite;

}

.ring3{

width:260px;

height:260px;

left:-130px;

top:-70px;

animation:rotate 15s linear infinite;

}

@keyframes rotate{

100%{

transform:rotate(360deg);

}

}

@keyframes rotateReverse{

100%{

transform:rotate(-360deg);

}

}
/* ===========================
   GOOGLE FONT
=========================== */

*{
margin:0;
padding:0;
box-sizing:border-box;
font-family:'Poppins',sans-serif;
}

body{

background:#06111f;
overflow-x:hidden;
color:white;
min-height:100vh;

}

/* ===========================
      BACKGROUND
=========================== */

.background{

position:fixed;

top:0;
left:0;

width:100%;
height:100%;

overflow:hidden;

z-index:-10;

background:linear-gradient(135deg,#06111f,#0d2440,#07192d);

}

.grid{

position:absolute;

width:200%;
height:200%;

background-image:

linear-gradient(rgba(0,255,255,.08) 1px,transparent 1px),

linear-gradient(90deg,rgba(0,255,255,.08) 1px,transparent 1px);

background-size:40px 40px;

animation:gridMove 18s linear infinite;

}

@keyframes gridMove{

0%{

transform:translateY(0);

}

100%{

transform:translateY(40px);

}

}

.glow{

position:absolute;

border-radius:50%;

filter:blur(120px);

opacity:.4;

}

.glow1{

width:350px;

height:350px;

background:#00d9ff;

top:-100px;

left:-120px;

}

.glow2{

width:320px;

height:320px;

background:#007bff;

bottom:-80px;

right:-80px;

}

/* ===========================
        HEADER
=========================== */

header{

text-align:center;

padding:70px 20px 40px;

}

header h1{

font-size:52px;

letter-spacing:4px;

margin-bottom:15px;

text-shadow:0 0 25px cyan;

}

header h1 i{

color:#00ffff;

margin-right:12px;

}

header p{

color:#b6d6ff;

font-size:20px;

}

/* ===========================
      MAIN CARD
=========================== */

.container{

display:flex;

justify-content:center;

padding:30px;

}

.card{

width:900px;

max-width:95%;

padding:40px;

background:rgba(255,255,255,.06);

border:1px solid rgba(255,255,255,.12);

backdrop-filter:blur(20px);

border-radius:30px;

box-shadow:0 0 40px rgba(0,255,255,.12);

}

.card h2{

font-size:34px;

margin-bottom:10px;

}

.subtitle{

color:#9fc5ef;

line-height:1.8;

margin-bottom:30px;

}

/* ===========================
      INPUT
=========================== */

input{

width:100%;

padding:18px;

border-radius:15px;

border:none;

outline:none;

background:#081d34;

color:white;

font-size:18px;

margin-bottom:25px;

}

input::placeholder{

color:#86b2e2;

}

/* ===========================
      BUTTON
=========================== */

button{

width:100%;

padding:18px;

border:none;

border-radius:15px;

font-size:18px;

font-weight:700;

cursor:pointer;

color:white;

background:linear-gradient(90deg,#00ffff,#008cff);

transition:.35s;

}

button:hover{

transform:translateY(-3px);

box-shadow:0 0 30px cyan;

}

/* ===========================
      SCANNER
=========================== */

.scanner{

height:10px;

background:#132845;

margin-top:35px;

border-radius:30px;

overflow:hidden;

}

.scanner-line{

height:100%;

width:0%;

background:linear-gradient(90deg,#00ffff,#008cff);

border-radius:30px;

transition:width .4s;

}

/* ===========================
      RESULT
=========================== */

.riskBox{

margin-top:35px;

}

.riskHeader{

display:flex;

justify-content:space-between;

margin-bottom:15px;

font-size:22px;

}

.riskBar{

height:15px;

background:#132845;

border-radius:50px;

overflow:hidden;

}

#riskProgress{

width:0%;

height:100%;

background:linear-gradient(90deg,lime,#00ffff,#ffb300,#ff3b3b);

transition:1s;

}

#resultCard{

margin-top:40px;

padding:30px;

border-radius:20px;

background:rgba(255,255,255,.05);

border:1px solid rgba(255,255,255,.08);

}

#resultTitle{

font-size:32px;

margin-bottom:12px;

}

#resultText{

font-size:18px;

color:#b7d5ff;

line-height:1.8;

}

/* ===========================
      ANALYSIS
=========================== */

.analysis{

margin-top:40px;

}

.analysis h3{

font-size:26px;

margin-bottom:18px;

}

.analysis ul{

padding-left:25px;

}

.analysis li{

margin:12px 0;

font-size:18px;

color:#cde6ff;

}

/* ===========================
      RESPONSIVE
=========================== */

@media(max-width:768px){

header h1{

font-size:36px;

}

.card{

padding:25px;

}

.card h2{

font-size:28px;

}

.subtitle{

font-size:16px;

}

input,
button{

font-size:16px;

}

#resultTitle{

font-size:24px;

}

}
