import { printComplexityOfSolution } from "../../0commonFunctions/printComplexities.js";

// Given a number and we have find the number of set(bit value == 1 ) bits present in it

function countSetBitsInNumber_Optimised(n) {
  // concept: (And operator &) + counter
  // time : O(n -> ), space :O(1)
  let arr = [];
  printComplexityOfSolution("And Operator", "O(n)", "O(1");

  let count = 0;
  while (n) {
    let currBit = n & 1;
    arr.push(currBit);
    if (currBit) count++;
    // update the number
    n = n >> 1;
  }
  arr.reverse();
  console.log(arr);
  return count;
}
let n = 40;
console.log("number is ", n);

const ans = countSetBitsInNumber_Optimised(n);
console.log("Number of set bit present is ", ans);
