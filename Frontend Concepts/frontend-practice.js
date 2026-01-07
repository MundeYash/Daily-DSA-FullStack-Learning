console.log("this file is about practicing the frontend concepts: ");

function printSetValues(s) {
  console.log("Set values", s);
}

function printObject(obj) {
  // for in loop: to iterate over the values  object only
  console.log("For of loops -values\n of == value ");
  for (key of obj) {
    console.log(key);
  }
  console.log("\n");
  // for of loops : to iterate over the key /indexof  of object /array

  console.log("For in loops -values\n in == index ");
  for (values in obj) {
    console.log(values);
  }
  console.log("\n");
}
// Switch statement
const arr = [1, 2, 3, 4];
// string concatenation concept

let a = 10;
let b = 20;
console.log("The value of " + a + b);

//Data Types

var set = new Set([1, 2, 3]);
printSetValues(set);
set.add(12, 1, 2, 3);
set.add(1, 2);
printSetValues(set);

// Types of loop

let obj = {
  name: "yash",
  age: 24,
  profession: "software engineer",
};
let array = [1, 2, "three", "four", true];
// printObject(obj);
printObject(array);

// String Templates
/*
Concate method
backtick and dollar use
*/

// template literal

// type of function
console.log(typeof obj);
console.log(typeof array);
console.log(typeof null);
console.log(typeof 1);
console.log(typeof true);
console.log(typeof undefined);
console.log(typeof "yash");
console.log(typeof "a");
console.log(typeof NaN);

// IIFE (Immediately invoked function expression)
/* declare and direct run without call 
Syntax is : (...)()
*/
(function sayHello() {
  console.log("IIFE : good morning");
})();
