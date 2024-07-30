//regular expressions
/*Regular expressions (Regex) are a way of describing patterns in a string of data, which allows you to search for data strings, like email addresses or passwords, that match that pattern. They’re an important part of programming languages like JavaScript, Python, Php and Java, among others. */
function splitWords(str) {
  return str.split(/\s+/);
}

let str =
  "shows We know some microb1es can break down certain plastics, but our new study finds no and cl22ear correlation between 1plastic pollution levels and the production of and pl54astic-degrading enzymes by marine microorganisms. home";
//creating an regex
let pattern = /and/gim;
console.log("pattern and in string :- ", str.match(pattern));
//character classes
//.	any character except newline
// \w\d\s	word, digit, whitespace
// \W\D\S	not word, digit, whitespace
// [abc]	any of a, b, or c
// [^abc]	not a, b, or c
// [a-g]	character between a & g

//anchors
// ^abc$	start / end of the string
// \b\B	word, not-word boundary

//Escaped characters
// \.\*\\	escaped special characters
// \t\n\r	tab, linefeed, carriage return

//groups or lookaround
// (abc)	capture group
// \1	backreference to group #1
// (?:abc)	non-capturing group
// (?=abc)	positive lookahead
// (?!abc)	negative lookahead

// Quantifies and alteration
// a*a+a?	0 or more, 1 or more, 0 or 1
// a{5}a{2,}	exactly five, two or more
// a{1,3}	between one & three
// a+?a{2,}?	match as few as possible
// ab|cd	match ab or cd