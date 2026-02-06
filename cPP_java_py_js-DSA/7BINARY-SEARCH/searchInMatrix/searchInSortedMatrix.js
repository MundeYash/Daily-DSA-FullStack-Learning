import { printComplexityOfSolution } from "../../0commonFunctions/printComplexities.js";
// Given a 2 D matrix and we have check whether a element exists in the matrix or not
function searchInSortedMatrix_Approach_Brute(matrix, element) {
  // concept : explore entire matrix and check
  // time: O(n^2), space :O(1)

  printComplexityOfSolution("Matrix explore", "O(n^2)", "O(1)");
  for (let row of matrix) {
    for (let col of row) {
      if (col == element) {
        return true;
      }
    }
  }
  return false;
}

function searchInSortedMatrix_Approach_Optimised(matrix) {}

let arr = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9],
];
console.log(arr);
let element = 4;
console.log(element);
let ans = searchInSortedMatrix_Approach_Brute(arr, element);
console.log(ans ? "Yes Exists" : "Not exists");
