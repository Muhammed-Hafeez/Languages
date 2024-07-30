//hoisting with var;
a = 20;
console.log(a); //undefined if not initialized
b = 30;
console.log(add(a, b));
var a, b;
function add() {
  return a + b;
}
