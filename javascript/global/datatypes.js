//Primitive dataTypes
console.log("\nPrimitive dataTypes\n");

/**
 * null
 * number
 * boolian
 * Bigint
 * symbol
 * string
 * undefined
 */

let dataTypes = null; //null
function log() {
  console.log(typeof dataTypes, "data type", dataTypes);
}
log();
dataTypes = 55.5; //number
log();
dataTypes = true; //boolian or true||false
log();
dataTypes = 12345678901234567890n; //BigInt
log();
dataTypes = "hello"; //string
log();
dataTypes = undefined; //undefined
log();
let s = Symbol("id"); //symbol
console.log(typeof s, "data type", s.description);

//Non Primitive dataTypes
console.log("\nNon Primitive dataTypes\n");

const item = {
  name: "Hasbulla",
  height: 3.2,
};
console.log("type of item :", typeof item);
for (const key in item) {
  console.log("values of non primitive object", item[key]);
}
