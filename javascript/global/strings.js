//strings
let names = "Hafeez";
//checking name length
console.log(names.length);
//string using template literals
names = `Hafeez`;
//string interpolation
console.log(`${names} ulla`);
//escape sequence characters
/*
\n for new line
\t for tab space
\r carriage return
*/
//string methods;
//along with length
console.log(names.toUpperCase()); //toLowerCase(); is also possible;
console.log(names.slice(0, 3));
names = "hafeez bhai";
console.log(names.replace("bhai", "ulla"));
console.log(names.concat(" is going someware"));
console.log(names.trim()); //removes corner whitespaces
