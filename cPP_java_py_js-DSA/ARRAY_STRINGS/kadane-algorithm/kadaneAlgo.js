let arr = [2, 3, -8, 7, -1, 2, 3];
console.log(arr);
function printTimeSpaceComplexity(timeComplexity, spaceComplexity) {
  console.log("TIME", timeComplexity);
  console.log("SPACE", spaceComplexity);
}

function kadaneAlgorithm_Brute(arr) {
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
  console.log("Approach");

  printTimeSpaceComplexity("O(N)", "O(1)");
  return maxiSum;
}
console.log("The maximum sum-subarray values is ", kadaneAlgorithm_Brute(arr));
function kadaneAlgorithm_Approach_Optised(arr) {
  // concept : negative sum and sum reset to 0
  let n = arr.length;
  let maxSum = Number.MIN_SAFE_INTEGER;
  let currSum = 0;

  for (let i = 0; i < n; i++) {
    currSum += arr[i];
    maxSum = Math.max(maxSum, currSum);
    if (currSum < 0) currSum = 0; // sum here becomes negative
  }
  console.log("Approach");

  printTimeSpaceComplexity("O(N)", "O(1)");
  return maxSum;
}

console.log(
  "The maximum sum-subarray values is ",
  kadaneAlgorithm_Approach_Optised(arr)
);
