//creating an array
let arr = ["banana", "apple", "mango"];
//accessing values
console.log(arr[0]);
//finding the length
console.log(arr.length); //Gets or sets the length of the array. This is a number one higher than the highest index in the array.

//changing the values
arr[2] = "pineapple";
console.log(arr);
//array methods
console.log(arr.toString()); //Returns a string representation of an array.
console.log(arr.join("-"));
arr.pop();
console.log(arr);
arr.push(9); //values can also be of different types
console.log(arr);
let newarr = arr.concat(["potato"]); //Combines two or more arrays. This method returns a new array without modifying any existing arrays.
console.log(newarr);
delete arr[2];
arr.length--;
console.log(arr);
arr.sort(); //Sorts an array in place. This method mutates the array and returns a reference to the same array.;
console.log(arr);
arr.reverse();
console.log(arr);
//splice(pos,num of elements to remove,newelements ...);
arr.splice(1, 1, "pineapple"); //Removes elements from an array and, if necessary, inserts new elements in their place, returning the deleted elements.
console.log(arr);
console.log(
  arr.slice(0, 1)
); /*Returns a copy of a section of an array. For both start and end, a negative index can be used to indicate an offset from the end of the array. For example, -2 refers to the second to last element of the array.*/
