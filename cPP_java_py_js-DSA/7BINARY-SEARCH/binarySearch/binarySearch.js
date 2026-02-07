import { printComplexityOfSolution } from "../../0commonFunctions/printComplexities.js";

// BINARY SEARCH CONCEPT: Given a sorted array and we need to find the whether the key exits in the array or not

let arr = [1, 2, 3, 4, 5, 5];

function binarySearchImplement(arr, target) {
  printComplexityOfSolution("binary search", "O(n log n ", "O(1)");
  let low = 0;
  let high = arr.length - 1;
  while (low <= high) {
    let mid = Math.floor((low + high) / 2);

    if (arr[mid] == target) return mid;
    else if (arr[mid] > target) {
      high = mid - 1;
    } else low = mid + 1;
  }
  return -1;
}

console.log("index of target ", arr, binarySearchImplement(arr, 2));
