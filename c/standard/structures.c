#include <stdio.h>

// Define a structure named 'Person'
struct Person
{
    char name[50]; // Character array to hold the name
    int age;       // Integer to hold the age
    float height;  // Float to hold the height
};

// Function to display the details of a Person
void displayPerson(struct Person p)
{
    // Print the person's details
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %.2f\n", p.height);
}

int main()
{
    // Create a Person variable
    struct Person person1;

    // Assign values to the person1's fields
    // Using string literal for name
    snprintf(person1.name, sizeof(person1.name), "Alice"); // Safe string copy
    person1.age = 30;                                      // Assign age
    person1.height = 5.7;                                  // Assign height in feet

    // Display the details of person1
    displayPerson(person1);

    // Create another Person variable and initialize it
    struct Person person2 = {"Bob", 25, 6.0}; // Using initialization

    // Display the details of person2
    displayPerson(person2);

    // Creating an array of structures
    struct Person people[2]; // Array to hold 2 Person structures

    // Initializing array of structures
    snprintf(people[0].name, sizeof(people[0].name), "Charlie");
    people[0].age = 22;
    people[0].height = 5.9;

    snprintf(people[1].name, sizeof(people[1].name), "Diana");
    people[1].age = 28;
    people[1].height = 5.5;

    // Display details of people in the array
    for (int i = 0; i < 2; i++)
    {
        displayPerson(people[i]); // Call function for each person in the array
    }

    return 0; // End of program
}
