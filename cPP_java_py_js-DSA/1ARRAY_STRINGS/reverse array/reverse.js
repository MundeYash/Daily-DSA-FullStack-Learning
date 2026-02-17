import { printComplexityOfSolution } from "../../0commonFunctions/printComplexities.js";
/*Given an array of integers and we need to reverse them */
let arr = [1, 2, 3, 4, 5, 6];
console.log("BEFORE : " + arr);
reverseArray(arr);
function reverseArray(arr) {
  // OPTIMISED APPROACH : TWO POINTER APPROACH and COMPARISON
  printComplexityOfSolution("Optimised -Two pointer Approach", "O(N)", "O(1)");
  let n = arr.length;
  let st = 0,
    en = n - 1;
  while (st < en) {
    [arr[st], arr[en]] = [arr[en], arr[st]]; // swaping using array
    // swap(arr,st,en); // we do not have swap function available in js
    st++;
    en--;
  }
  console.log("AFTER: ", arr);
}

// reverse string : because string are immutable;


function reverseString(s) {
  let arr = s.split("");
  let i = 0, j = arr.length - 1;

  while (i < j) {
    [arr[i], arr[j]] = [arr[j], arr[i]];
    i++;
    j--;
  }

  return arr.join("");
}

let str = "rakesh";
console.log(str);
str = reverseString(str);
console.log(str); // hsekar

