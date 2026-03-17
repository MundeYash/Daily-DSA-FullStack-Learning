// Given an array of integers and we need to identify the majority elements from them
/*
Majority Elements : The elements which appears more than (n/2)times in the array 
*/

function majorityElements_Approach1_Brute(arr) {
  // Better approach : Hashing
  // time : O(n), space:O(n)
  let mp = new Map(); // key->value
  let n = arr.length;
  let ans = [];

  // step1: update the frequency of elements in the map
  for (let i = 0; i < arr.length; i++) {
    let value = arr[i];
    let ans = [];
    if (!mp.get(value)) mp.set(value, 1);
    else {
      let lastFreq = mp.get(value);
      lastFreq++;
      mp.set(value, lastFreq);
    }
  }
  // step2: check the key whose freq is more than k
  for (let key of mp) {
    console.log("K", key);
    if (key[1] > n / 2) {
      ans.push(key[0]);
    }
  }

  return ans;
}
let arr = [1, 1, 2, 1, 3, 5, 1];
console.log("The array elements is", arr);
let ans = majorityElements_Approach1_Brute(arr);
console.log("The majority elements are ", ans);
