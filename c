<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Lato:400,700|Montserrat:900">
    <title>Document</title>
    <style>

body{
    background-color: white;
}
  
#timer {
  color: #00462A;
  text-align: center;
  text-transform: uppercase;
  font-family: 'Lato', sans-serif;
  font-size: .7em;
  letter-spacing: 5px;
}

.days, .hours, .minutes, .seconds {
  display: inline-block;
  padding: 20px;
  width: 100px;
  border-radius: 5px;
}

.days {
  background: #FFFDF1;
  
}

.hours {
  background: #FFFDF1;
  color: #00462A;
}

.minutes {
  background: #FFFDF1;

}


.numbers {
  font-family: 'Montserrat', sans-serif;
  color:  #00462A;
  font-size: 4em;
  text-align: center;
}

.white {
  position: absolute;
  background:  #eeeeee;
  height: 85px;
  width: 75px;
  left: 30%;
  top: 2%;
}

.red {
  position: absolute;
  background:  #EF2F3C;
  left: 18%;
  top: 9%;
  height: 65px;
  width: 70px;
 
}

.blue {
  position: absolute;
  background:  #276FBF;
  height: 80px;
  width: 80px;
  left: 60%;
  top: 5%;


}


    </style>
</head>
<body>
    
<div id="timer">

    <div class="days"> 
        <div id="days" class="numbers "> </div>days</div> 
      <div class="hours"> 
        <div  id="hours" class="numbers"> </div>hours</div> 
      <div class="minutes"> 
        <div  id="minutes" class="numbers"> </div>minutes</div> 
      </div>

</div>

</body>
<script>
    const year = new Date().getFullYear();
const myDate = new Date('Oct 23, 2024 00:00:00');
console.log(myDate);

// countdown
let timer = setInterval(function() {

  // get today's date
  const today = new Date().getTime();

  // get the difference
  const diff = myDate - today;

  // math
  let days = Math.floor(diff / (1000 * 60 * 60 * 24));
  let hours = Math.floor((diff % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60));
  let minutes = Math.floor((diff % (1000 * 60 * 60)) / (1000 * 60));
 
  // display
  document.getElementById("days").innerHTML=days
  document.getElementById("hours").innerHTML=hours
  document.getElementById("minutes").innerHTML=minutes
 


}, 1);
</script>
</html>
