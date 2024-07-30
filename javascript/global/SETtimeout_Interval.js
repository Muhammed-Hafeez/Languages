//settime out
let a = setTimeout(() => {
  //returns a time id
  console.log("settimeout");
}, 3000);
let c = setTimeout(() => {
  console.log("dont run me");
}, 10000);
clearTimeout(c); //terminate the time out immediately
let i = 0;
let b = setInterval(() => {
  console.log(`SetInterval${i}s`);
  if (i >= 3) {
    clearInterval(b); //to stop interval
  }

  i++;
}, 1000);
