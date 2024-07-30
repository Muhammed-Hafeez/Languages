/*
Polymorphism, a core concept in object-oriented programming (OOP), allows objects of different types to be treated as objects of a common type. In simpler terms, it means "many forms" - the ability for a single interface to represent different underlying data types or structures.
 */

//dynamic polymorphism
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
class bomb extends Weapon {
  constructor(name) {
    super();
    this.item = name;
    this.type = "explosives";
  }
    shoot() {//polymorphism
    bomb.explode(this.item).then((msg) => {
      //static keyword
      console.log(msg);
    });
    return `launched a ${this.item}`;
  }
  static async explode(item) {
    return new Promise((resolve) => {
      setTimeout(() => {
        resolve(`${item} exploded`);
      }, 6000);
    });
  }
}
const ak47 = new Weapon("ak47", "gun");
const granade = new bomb("granade");
console.log(granade.pick());
console.log(granade.shoot());
console.log(ak47.pick());
console.log(ak47.shoot());