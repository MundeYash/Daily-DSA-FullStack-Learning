/*Given an array , we need to find all the subarray whose sum is equal to k, return the number of such subarrays  */

function kSumSubarray(arr, k) {
  // concept : explore all subarray and maintain sum and counter
  // Time :O(n^2), space : O(1)
  let count = 0;
  let n = arr.length;
  for (let i = 0; i < n; i++) {
    let sum = 0;

    for (let j = i; j < n; j++) {
      sum += arr[j];
      if (sum == k) {
        count++;
      }
    }
  }

  return count;
}
let arr = [10, 2, -2, -20, 10];
console.log(arr);
let k = -10;
let noOfSubarrays = kSumSubarray(arr, k);
console.log("the number of subarrays whose sum is k ", noOfSubarrays);
