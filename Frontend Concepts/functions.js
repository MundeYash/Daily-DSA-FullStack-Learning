function test(a, b) {
  console.log(a + b);
  console.log("all entered arguments", arguments); // js store passed argument in form of array
}
test(2, 3, 4, 10); // javscript ignores the extra parameters while call

// write a function which can take/ accept unlimited number of arguments and print

// SPREAD OPERATOR : (used for accessing arguments inside arrow functions)

function addDetails(...userDetails) {
  for (let i = 0; i < userDetails.length; i++) {
    console.log(userDetails[i]);
  }
}

addDetails(10, 20, 30, 50, 100);

// this in simple function vs this in arrow function
