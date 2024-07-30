//creating an array
let arr = ["banana", "apple", "mango"];
let newarr = arr.concat(["potato"]);
let i = 0;
arr = arr.map((element) => {
  i++;
  return element + `${i}`; //calls a function for each element and returns new array;
});
console.log(arr);
console.log("before filtering", newarr);
newarr = newarr.filter((elemnet) => {
  //Returns the elements of an array that meet the condition specified in a callback function.
  if (typeof elemnet === "string") return elemnet;
});
console.log("after filtering", newarr);

//reduce
let sum = arr.reduce((first, second) => {
  let sum = first + second;
  return sum;
});
console.log(sum);
//for each explained in loops but it does not return anything it alters existing array
i = 0;
arr.forEach((e) => {
  arr[i] = arr[i] + " hello";
  i++;
  return arr[i];
});
console.log(arr);

for (const key in arr) {
  if (Object.hasOwnProperty.call(arr, key)) {
    console.log(key);
  }
}
for (const i of arr) {
  console.log(i);
}
console.log(Array.from(arr[0]));
