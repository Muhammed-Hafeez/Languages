//making custom errors
console.log("\nmaking custom errors\n");
let error = (name, message) => {
  let err = new Error();
  err.name = name;
  err.message = message;
  return err;
};
try {
  let age = 12;
  if (age < 18 || age > 30) {
    throw error("AgeError", "Invalid age");
  }
} catch (error) {
  const { name, message, stack } = error;
  console.log("name: ", name);
  console.log("message: ", message);
  console.log("stack: ", stack);
}
