// Problem Statement : Move Zeroes to end of array  (leet code standard)
/*
Given an array of integers and we need to move all the zeros to end of the array while keeping the non-zeroes element order intact
*/

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
  return ans;
}



(function solution() {// this way of calling function is called IIF (immediately invoked functions)
  let arr = [0, 1, 0, 3, 12];
  console.log(arr);
  console.log(approach1BruteForce(arr));
})();
