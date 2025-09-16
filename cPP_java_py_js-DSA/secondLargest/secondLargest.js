function secondLargest(arr) {
  // optimised approach: (using two variables)

  console.log("Time complexity:O(n");
  console.log("Space complexity:O(1)");
  let largest = Number.MIN_SAFE_INTEGER;
  let secondLargest = Number.MIN_SAFE_INTEGER;

  let n = arr.length;
  for (let i = 0; i < n; i++) {
    if (arr[i] > largest) {
      secondLargest = largest; // shift the value of largest into second largest
      largest = arr[i]; // update largest
    } else if (arr[i] > secondLargest && arr[i] != largest) {
      secondLargest = arr[i]; // update second largest
    }
  }
  if (secondLargest == Number.MIN_SAFE_INTEGER) {
    return -1;
  }

  return secondLargest;
}
let arr = [2, 2, 1, 3, 10, 12, 15, 100];
console.log(arr);
console.log("second largest value is : ", secondLargest(arr));
