// In programming, inheritance refers to passing down characteristics from a parent to a child so that a new piece of code can reuse and build upon the features of an existing one. JavaScript implements inheritance by using objects. Each object has an internal link to another object called its prototype.
function Person(first, last, age, eyecolor) {
  this.firstName = first;
  this.lastName = last;
  this.age = age;
    this.eyeColor = eyecolor;
}

Person.prototype.name = function () {
  return this.firstName + " " + this.lastName;
};
let me = new Person("hafeez", "ulla", 18, "black");
console.log(me.name());
