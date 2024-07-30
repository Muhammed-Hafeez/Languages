/*
Abstraction is a fundamental concept in object-oriented programming (OOP) that involves hiding the complex implementation details of code and exposing only the essential features to the user. In simpler terms, it's like creating a simplified representation of something more complex.
Importance of Abstraction in JavaScript:
Manageability:
Abstraction breaks down complex code into smaller, more manageable modules. This makes it easier to understand, maintain, and debug your codebase.
Reusability:
By hiding implementation details, abstraction allows you to reuse components in different parts of your application or even in other projects. This saves time and effort in development.
Collaboration:
When working in teams, abstraction provides a clear interface for interacting with code modules. This allows developers to work on different parts of the application simultaneously without worrying about internal implementations.
Flexibility:
Abstraction makes your code more adaptable to changes. If you need to modify the internal implementation of a module, you can do so without impacting other parts of the application that use its public interface.
 */
class Car {
  constructor(make, model) {
    this.make = make;
    this.model = model;
  }

  startEngine() {
    // Complex logic to start the engine
    console.log(`${this.make} ${this.model} engine started.`);
  }
}

const myCar = new Car("Toyota", "Corolla");
myCar.startEngine();