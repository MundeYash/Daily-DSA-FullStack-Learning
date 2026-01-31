import { printComplexityOfSolution } from "../../commonFunctions/printComplexities.js";
// Problem : Given sorted array and we need remove all the duplicate elements and left behind only the non-duplicate element in the array
/*------------------------------------------------------------ */

/*---Optimised Approach - StartIndex pointer and comparison--------------------------------------------------------- */

function removeDuplicatedSortedArray_Approach1_Optimised(arr) {
  // concept : Two pointer for start index - In-place
  // time :o(n), space :O(1)
  printComplexityOfSolution(
    "Optimised- two pointer comparison",
    "O(N)",
    "O(1)",
  );
  let n = arr.length;

  let startIndex = 0;
  let count = 1;
  for (let i = 1; i < arr.length; i++) {
    // step1 : find place the unique values at right position
    if (arr[i] != arr[startIndex]) {
      startIndex++;
      arr[startIndex] = arr[i];
      count++; // count of unique values
    }
  }

  // step 2: remove the extra elements other than unique from existing array
  for (let i = startIndex + 1; i < n; i++) {
    arr.pop();
  }
  console.log("After Removing duplicate elements ", arr);
  return count;
}
let arr = [1, 1, 3, 3, 12, 22, 42];
console.log(arr);
console.log(removeDuplicatedSortedArray_Approach1_Optimised(arr));
