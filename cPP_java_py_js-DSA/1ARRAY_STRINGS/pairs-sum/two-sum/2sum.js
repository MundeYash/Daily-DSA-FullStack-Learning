import {
  printComplexityOfSolution,
  printArray,
} from "../../../0commonFunctions/printComplexities.js";
//Given an array of integers and we need find all the pairs whose sum is equal to target value

let arr = [2, 7, 11, 15];

/*----------------------------------------------------------------------------------------------------------------------------------------------------------*/
function twoPairSum_Aproach_Better2(arr, target) {}

/*----------------------------------------------------------------------------------------------------------------------------------------------------------*/
function twoPairSum_Aproach_Better1(arr, target) {
  // important if index does not matter  (unique value pairs )
  // concept : sorting + two pointer comparison
  printComplexityOfSolution(
    "Sorting + Two pointer comparison ",
    "O(n log n )",
    "O(1)",
  );
  let ans = [];
  arr.sort((a, b) => a - b);
  let st = 0,
    en = arr.length - 1;
  while (st < en) {
    let value = arr[st] + arr[en];
    if (value == target) {
      let temp = [];
      temp.push(arr[st]);
      temp.push(arr[en]);
      ans.push(temp);
      st++;
      en--;
    } else if (value > target) {
      // value over shoot -> you want some smaller value -> move to left
      en--;
    } else {
      // value gets smaller -> you want some bigger value -> move to right
      st++;
    }
  }

  return ans;
}

/*----------------------------------------------------------------------------------------------------------------------------------------------------------*/

function twoPairSum_Approch_Brute(arr, target) {
  printComplexityOfSolution("Explore All possible pairs", "O(n^2)", "O(1)");
  let ans = [];

  // concept : brute force : Explor All pairs , time : O(N^2), space : O(1)

  let n = arr.length;
  for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
      let value = arr[i] + arr[j];
      if (value == target) {
        // one possible answer is finded
        let temp = [];
        temp.push(i);
        temp.push(j);

        ans.push(temp);
        console.log("temp", temp);
        console.log("ans", ans);
      }
    }
  }
  console.log("indexes are getting returned");

  return ans;
}

/*----------------------------------------------------------------------------------------------------------------------------------------------------------*/

printArray(arr);
let target = 9;
let ans = twoPairSum_Approch_Brute(arr, target);
printArray(ans);

let ans2 = twoPairSum_Aproach_Better(arr, target);
printArray(ans2);

let ans3 = twoPairSum_Aproach_Better2(arr, target);
printArray(ans3);
