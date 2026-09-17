// Hoisting in javascript with real time examples

// variable hoisting for var,let and const

// scopes: local, global, functional , block scope
getName();
console.log(x);

x = 100;

function getName() {
  x = 20;
  console.log("My name is yash Munde");
}
getName();

//

var functionValue = getName;
console.log(functionValue);
functionValue();

// code exectution step by step

// function expression
var getName2 = () => {
  console.log("My name is yash Munde");
};
console.log(x);
