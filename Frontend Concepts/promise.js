// Proimse:  Promise is an object which represents the eventual completion or failure of an asynchronous operation

const USER_GITHUB_DETAILS = "https://api.github.com/munde-yash";
const usesPromise = fetch(USER_GITHUB_DETAILS);
// console.log(usesPromise, typeof usesPromise);

usesPromise.then(function (data) {
  console.log("data from promise is ", data);
});

// interview related question to Promise :
/*Problem solved with Promise:
call-back hell like structure is repalced with .then() , .catch() , .finally() functions  using promise chaining

inversion of control : it is not resolved by attaching function , instead of passing a  functions 

*/

/*
cleaner way of writing promises for multiple promise/ callback hell problem

*/

// Creating a Promise using constructor
