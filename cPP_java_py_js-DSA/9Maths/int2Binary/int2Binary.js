import { printComplexityOfSolution } from "../../0commonFunctions/printComplexities.js";

// Given a number and we have find the binary representation of it 
let n = 29;

function reverseString(s) {
  let arr = s.split("");
  let i = 0,
    j = arr.length - 1;

  while (i < j) {
    [arr[i], arr[j]] = [arr[j], arr[i]];
    i++;
    j--;
  }

  return arr.join("");
}
let int2Binary_Optimised = (n) => {
  printComplexityOfSolution("And: & operator", "O(n)", "O(1)");
  let ans = "";
  while (n) {
    let currBit = n & 1;
    ans += currBit;
    n = n >> 1;
  }
  //reverse it
  ans = reverseString(ans);
  return ans;
};
const ans = int2Binary_Optimised(n);
console.log("number is ", n);
console.log("The binary representation is", ans);
