const Prompt = require("prompt-sync")();
//functions

// a = Prompt("enter a number");
// b = Prompt("enter a number");
let a=0, b=1;
a = Number(a);
b = Number(b);
function add() {
  return a + b;
}
//arrow function
let subtract = () => {
  return a - b;
};
console.log(add(), subtract());

//the value of "this" may differ

const obj = {
  name: "hafeez",
  normal: function () {
    console.log("\nnormal function\n");
    console.log(this);
  },
  arrow: () => {
    this.name = "Mz";
    console.log("\narrow function\n");
    console.log(this);
  },
};
obj.normal();
obj.arrow();
console.log(this.name);
