// function to find the nth fibonacci number
function fibonacci(n) {
  if (n <= 1) {
    return n;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}
function fiboPrint(n) {
  for (let i = 0; i < n; i++) {
    console.log(fibonacci(i));
  }
}
// function for finding factorial of number
function factorial(n) {
  // base case
  if (n <= 0) return 1;

  // recursive case
  return n * factorial(n - 1);
}

// function for counting the vowel consonants and white space characters
function countVowelConsonantWhiteSpace(str) {
  let n = str.length;
  let vowel = 0,
    consonant = 0,
    whiteSpace = 0;
  for (let i = 0; i < n; i++) {
    if (
      str[i] == "a" ||
      str[i] == "e" ||
      str[i] == "i" ||
      str[i] == "o" ||
      str[i] == "u" ||
      str[i] == "A" ||
      str[i] == "E" ||
      str[i] == "I" ||
      str[i] == "O" ||
      str[i] == "U"
    ) {
      vowel++;
    } else if (str[i] == " ") {
      whiteSpace++;
    } else {
      consonant++;
    }
  }
  console.log("vowel: " + vowel);
  console.log("consonant: ", consonant);
  console.log("white space: ", whiteSpace);
}
// string passing as parameter to a function
function reverseString(str) {
  // string are immutable in java and javascript
  let arr = str.split(""); // Convert string to array of characters
  let n = arr.length;
  let i = 0,
    j = n - 1;
  while (i < j) {
    let temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }
  return arr.join("");
}
// arrays passing as an arguement and finding minmum and maximum element
function minMax(arr, n) {
  let mini = arr[0];
  let maxi = arr[0];
  for (let i = 0; i < n; i++) {
    if (arr[i] < mini) {
      mini = arr[i];
    }
    if (arr[i] > maxi) {
      maxi = arr[i];
    }
  }
  console.log(mini, maxi);
  return [mini, maxi]; // in javascript we don't have to explictly mention the value returning by the function
}
// Non Returning Function and Non Parameter
function greet() {
  console.log("Good Morning Mitron");
}

// Returning and Passing paramters
function add(a, b) {
  //we don't have to specicy the data type while passing it as a paramter

  return a + b;
}
// comments in javascript
console.log("practice the basics of javascript ");

// output or printing in javascript

console.log("\n Learning the basics of javascript ");

// data types and variable declaration and intialization
var a;
console.log(a); // undefinded will show
a = 19;
console.log(a);

let b = 100;
const c = true; // value of constant can't be reintialized
console.log(b, c, a);
b = "guddu rangila ";
console.log(b); //  we can change the variable value to one data type to other

/* User Input:   */

// a = prompt('enter the value of a ');
// console.log(`The value entered via the prompt is ${a}`);
// console.log('The value a is '+ a );

/* Function Declaration , calling , passing paramters  */

greet(); // function calling
console.log(add(10, "ramesh")); // function calling with parameters

/*IF-ELSE STATEMENT IN JAVASCRIPT  */
if (a >= 18) {
  console.log("You are adult ");
} else {
  console.log("You are Minor ");
}

/* Loops concept  IN JAVASCRIPT  */

// for loop

console.log("Table of 2 Printing ");
for (let i = 1; i <= 10; i++) {
  console.log(2 * i);
}

// while loop
console.log("Even number ");
let i = 2;
while (i <= 10) {
  console.log(i);
  i += 2;
}
// do while loop
do {
  console.log("mimum one time will executed ");
} while (false);

/*ARRAY CONCEPT IN JAVASCRIPT  */
let arr = [2, 46, 18, 10];

// size finding
let n = arr.length;
console.log(n, n); // we can print mulitple vaue using (,)commans operator
// we can also concatenate two varibles values using plus operator (+)

/*ARRAY PASSING AS AN ARGUMENT IN FUNCTION  */
let result = minMax(arr, n); // array return
console.log(result);

/*STRING CONCEPT  */
let s = "Yash Munde";
let N = s.length;
console.log(s, N);
// Passing string as parameter
let rev = reverseString(s);
console.log(rev);
// strings are immutable in java and javascript
countVowelConsonantWhiteSpace(s);

/*RECRUSION CONCEPT  */
let fact = factorial(5);
console.log(fact);

// fibonacci series
fiboPrint(5);
