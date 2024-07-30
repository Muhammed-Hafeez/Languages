/*Inheritance is a fundamental concept in Object-Oriented Programming (OOP) that allows a class to inherit properties and methods from another class. In JavaScript, this is achieved through a mechanism known as prototypal inheritance.
 */
class Item {
  constructor() {
    this.item = null;
    this.type = null;
  }
  pick() {
    return `the ${this.item} is picked and its type is ${this.type}`;
  }
}
class Weapon extends Item {
  constructor(weaponName, type) {
    super();
    this.w = weaponName;
    this.item = weaponName;
    this.type = type;
  }
  shoot() {
    return `${this.w} is shooting`;
  }
}
const ak47 = new Weapon("ak47", "gun");
console.log(ak47.pick());
console.log(ak47.shoot());
