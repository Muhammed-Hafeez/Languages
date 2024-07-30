//Encapsulation
/**
 * Encapsulation is one of the fundamentals of OOP (object-oriented programming). It refers to the bundling of data with the methods that operate on that data. Encapsulation is used to hide the values or state of a structured data object inside a class, preventing unauthorized parties' direct access to them.
 */
class Encap {
  #Name; //private property
  constructor(newname) {
    this.#Name = newname;
  }
  #Say() {
    return "private";
  }

  get name() {
    console.log(this.#Say());
    return this.#Name;
  }
  /**
   * @param {String} newname
   */
  set name(newname) {
    this.#Name = newname;
  }
}
const e = new Encap("Hafeez");
console.log(e.name);
e.name = "zabi";
console.log(e.name);
// console.log(e.#say()); throws an error
