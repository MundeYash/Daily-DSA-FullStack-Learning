import { printComplexityOfSolution } from "../../commonFunctions/printComplexities.js";

// Problem Statement : Move Zeroes to end of array  (leet code standard)
/*
Given an array of integers and we need to move all the zeros to end of the array while keeping the non-zeroes element order intact
*/
let arr = [0, 1, 0, 3, 12];
function approach1BruteForce(arr) {
  // concept : use another array(not recommended )
  let ans = [];
  let count = 0;
  for (let value of arr) {
    if (value !== 0) {
      ans.push(value);
    } else {
      count++;
    }
  }
  while (count--) {
    ans.push(0);
  }
  printComplexityOfSolution("Brute Force- Using Extra Array", "O(N)", "O(N)");
  return ans;
}

(function solution() {
  // this way of calling function is called IIF (immediately invoked functions)

  console.log(arr);

  console.log("Brute Force ", approach1BruteForce(arr));
})();


function approach2Optimised(arr) {
  // concept : Two Pointer and swaping

  let j = 0;
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] != 0) {
      // swap in case of non-zero element
      // swapElements(i, j, arr);
      [arr[i], arr[j]] = [arr[j], arr[i]];
      j++;
    }
  }
  printComplexityOfSolution("Optimised Approach- Two Pointers", "O(N)", "O(1)");
  return;
}
approach2Optimised(arr);
console.log("Optimised Approach", arr);
