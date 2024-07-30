//Conditionals
console.log("\nConditionals :\n");
//if-else-if
console.log("if-else-if:");
let age = 18;
if (age >= 18 && age < 70) {
  console.log("condition 1 success");
} else if (age < 18) {
  console.log("condition 2 success");
} else {
  console.log("condition  unsuccessful");
}
//ternary operator
console.log("\nternary operator");
a ? console.log("a is 1") : console.log("a is 0");

//switch case
console.log("\nswitch case");
const val = 30;
switch (true) {
  case val > 0 && val <= 10:
    console.log("you are kid");

    break;
  case val > 10 && val <= 17:
    console.log("you are teenager");

    break;
  case val > 17 && val <= 30:
    console.log("you are adult");

    break;
  case val > 30 && val <= 100:
    console.log("you are senior");
    break;
  default:
    console.log("invalid age");
    break;
}
