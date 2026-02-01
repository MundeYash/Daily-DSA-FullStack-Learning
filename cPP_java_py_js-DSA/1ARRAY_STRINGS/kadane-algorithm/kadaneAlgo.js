import { printComplexityOfSolution } from "../../0commonFunctions/printComplexities.js";
let arr = [2, 3, -8, 7, -1, 2, 3];
console.log(arr);

function kadaneAlgorithm_Approach_Brute(arr) {
  // concept : explore all subarray, sum comparison
  // time : O(N^2) , space : O(1)
  printComplexityOfSolution(
    "Brute :Explore all possible combination",
    "O(N^2)",
    "O(1)",
  );
  let n = arr.length;
  let maxiSum = Number.MIN_SAFE_INTEGER;
  for (let i = 0; i < n; i++) {
    let sum = 0;
    for (let j = i; j < n; j++) {
      sum += arr[j];
      if (sum > maxiSum) {
        maxiSum = sum;
      }
    }
  }
  return maxiSum;
}
console.log(
  "The maximum sum-subarray values is ",
  kadaneAlgorithm_Approach_Brute(arr),
);
function kadaneAlgorithm_Approach_Optimised(arr) {
  // concept : negative sum and sum reset to 0
  let n = arr.length;
  let maxSum = Number.MIN_SAFE_INTEGER;
  let currSum = 0;

  for (let i = 0; i < n; i++) {
    currSum += arr[i];
    maxSum = Math.max(maxSum, currSum);
    if (currSum < 0) currSum = 0; // sum here becomes negative
  }

  printComplexityOfSolution("Optimised - Negative sum ", "O(N)", "O(1)");
  return maxSum;
}

console.log(
  "The maximum sum-subarray values is ",
  kadaneAlgorithm_Approach_Optimised(arr),
);
