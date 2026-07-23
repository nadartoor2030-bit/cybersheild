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
