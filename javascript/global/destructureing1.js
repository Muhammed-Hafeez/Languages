//array destructuring
let [x, y, ...rest] = [10, 20, 30, 40, 50]; //destructuring assignment
console.log(x, y, rest);
//object destructuring
let { a, b } = { a: true, b: false };
console.log(a, b);
//spread syntax
let arr = { ...rest };
console.log(arr);

function sum(a, b) {
  return a + b;
}
console.log(sum(...rest));

