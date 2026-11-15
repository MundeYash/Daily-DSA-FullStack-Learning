function test(a, b) {
  console.log(a + b);
  console.log("all entered arguments", arguments); // js store passed argument in form of array
}
test(2, 3, 4, 10); // javscript ignores the extra parameters while call

// write a function which can take/ accept unlimited number of arguments and print / return the sum of values in it 
function giveSumOfArguments(...functionsArguements){
  let sum =0;
  for (let value of functionsArguements){
      sum += value ;

  }
  return sum ;
}

// SPREAD OPERATOR : (used for accessing arguments inside arrow functions)

function printDetails(...userDetails) {
  for (let i = 0; i < userDetails.length; i++) {
    console.log(userDetails[i]);
  }
}

printDetails(10, 20, 30, 50, 100);

// calling function 
console.log("value",giveSumOfArguments(10,20));
console.log(giveSumOfArguments(10,20,100,1,23,3,4));

// this in simple function vs this in arrow function
