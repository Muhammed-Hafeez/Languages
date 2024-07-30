function pstdo(value) {
  process.stdout.write(`${value}`);
}
//for loop
console.log("for loop:");
for (let i = 0; i < 3; i++) {
  pstdo(i);
  pstdo(" ");
}
//for of loop
console.log("\nfor of loop");
const arr = [10, 20, 30, 40, 50];
for (const i of arr) {
  pstdo(i);
  pstdo(" ");
}
//for in loop
console.log("\nfor in loop");
const object = {
  name: "Hafeez",
  age: 18,
  desc: "Hello",
  child: {
    say: "hello",
  },
};
for (const key in object) {
  if (Object.hasOwnProperty.call(object, key)) {
    const element = object[key];
    pstdo(element);
    pstdo(" ");
  }
}
//for each loop
console.log("\nfor Each loop");
const arr1 = [10, 20, 30, 40, 50];
arr1.forEach(e => {
    pstdo(e);
    pstdo(" ");
});
//while loop
console.log("\nwhile loop");
let i = 0
while (i < 10) {
    pstdo(i);
    pstdo(" ");
    i++;
}
//do while loop
console.log('\ndo while loop');
do {
    pstdo("prints once even if the condition is false")
} while (i < 10);