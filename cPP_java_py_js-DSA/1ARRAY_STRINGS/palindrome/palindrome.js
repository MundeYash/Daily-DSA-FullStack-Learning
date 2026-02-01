import { printComplexityOfSolution } from "../../0commonFunctions/printComplexities.js";
// Problem Statement : Given a string and we have to check whether it is a palindrome or not.

let str = "naman";
let str2 = "suresh";
function checkPalindrome(str) {
  // concept : two pointer ,comparison
  // time :O(n) , space : O(1)
  printComplexityOfSolution("Optimised Two Pointer", "O(N)", "O(1)");
  let i = 0,
    j = str.length - 1;
  while (i < j) {
    if (str[i] != str[j]) return false;
    i++;
    j--;
  }
  return true;
}
console.log("check palindrome ", str, checkPalindrome(str));
console.log("check palindrome ", str2, checkPalindrome(str2));
