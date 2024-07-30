let allpromise = async () => {
  let p1, p2, p3;
  p1 = new Promise((resolve, reject) => {
    setTimeout(() => {
      resolve("p1");
    }, 2000);
  });
  p2 = new Promise((resolve, reject) => {
    setTimeout(() => {
      resolve("p2");
    }, 3000);
  });
  p3 = new Promise((resolve, reject) => {
    setTimeout(() => {
      reject("p3");
    }, 4000);
  });
  const result = await Promise.allSettled([p1, p2, p3]);
  return result;
};
const result = allpromise();
result.then((value) => {
  console.log(value);
});
