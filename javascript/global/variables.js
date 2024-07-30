// variables
console.log("\nvariables and there scopes");

{
  var variable = 10; //global scoped;
}
console.log(variable);
let blockedScope = 30; //local scoped
{
  let blockedScope = 20;
  console.log("under the block", blockedScope);
}
const constantVariable = 20; //local but conatant
console.log("outside", blockedScope);
console.log("Constant", constantVariable);
