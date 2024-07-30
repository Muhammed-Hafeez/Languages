//try catch an error object example
try {
  hey;
} catch (err) {
  const { name, message, stack } = err;
  console.log("name: ", name);
  console.log("message: ", message);
  console.log("stack: ", stack);
} finally {
  console.log(
    "\nthis code will run if err comes or goes End of try catch and error objects\n"
  );
}
