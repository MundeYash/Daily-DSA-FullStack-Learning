/*Given two array elements and we have to find the common elements in both array , don't consider duplicate case in ans */

// Approach1 : sorting and two pointer comparison

// Approach2 : hashing approach

function intersectionOfArray_Optimised(nums1, nums2) {
  let mp = new Map();// key -> [firstFreq, secondFreq]

  // Step1: Iterate in first array

  for (let i = 0; i < nums1.length; i++) {
    let val = nums1[i];
    // if first time occurence
    if (mp.has(val) === false) mp.set(val, [1, 0]);
    else {
      let arr = mp.get(val);
      arr[0] += 1;
      mp.set(val, arr);
    }

    console.log("index ", i, nums1[i], "value of ", mp.get(val));
  }

  // Step2: iterate over second map and check 

  for (let val of nums2) {
    if (!mp.has(val)) {
      // this value does not exists
      mp.set(val, [0, 1]);
    }
    else{
        // means already exits 
        let arr = mp.get(val);
        arr[1]++;
        mp.set(val,arr);
    }
  }

  // Step3 : iterate over map and check for common keys 
  let ans =[];
  for(let key of mp ){
    console.log("k",key);
    let k = Math.min(key[1][0],key[1][1]);
    while (k--){
        ans.push(key[0]);
    }
  }
  console.log(mp);
  return ans;
}
let nums1 = [1, 2, 2, 1],
  nums2 = [2, 2];
console.log(nums1, nums2);
let ans = intersectionOfArray_Optimised(nums1, nums2);
console.log("Common elements in both array are ",ans);
