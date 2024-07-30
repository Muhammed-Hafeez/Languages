//promise example
let promise = new Promise((resolve, reject) => {
  setTimeout(() => {
    resolve("done");
    reject("an error occured");
    // throw new Error("this is error");
  }, 2000);
})
  .then((val) => {
    console.log(val);
    return "p1";
  })
  .catch((val) => {
    console.log(val);
  })
  .finally(() => {
    console.log("finally");
    return 0;
  });
let p2 = new Promise((resolve, reject) => {
  setTimeout(() => {
    resolve("p2");
  }, 3000);
});
Promise.all([promise, p2]).then((value) => console.log("all = ", value));
Promise.any([promise, p2]).then((value) => console.log("any = ", value));
Promise.allSettled([promise, p2]).then((value) =>
  console.log("allSettled = ", value)
);
Promise.race([promise, p2]).then((value) => console.log("race = ", value));
// Promise.([promise, p2]).then((value) => console.log("any = ", value));
