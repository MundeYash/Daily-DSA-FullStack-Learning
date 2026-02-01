import { printComplexityOfSolution } from "../../commonFunctions/printComplexities.js";
/*MERGE TWO SORTED ARRAY  :  Given Two sorted and we need to merge them in place */

/*------------------------------BruteForce---------------------------------- */

/*------------------------------Better Approach---------------------------------- */
function mergeTwoSortedArray_Approach_Better(a, b) {
  // concept : Two Pointer: Arrange element at right array and sort them
  // time : O(min(n,m)), space :O(1)
  printComplexityOfSolution("Two Pointer ", "O(min(n,m))", "O(1)");
  console.log("array elements", a, b);
  let left = a.length - 1;
  let right = 0;
  while (left >= 0 && right < b.length) {
    if (a[left] > b[right]) {
      [a[left], b[right]] = [b[right], a[left]];
      left--;
      right++;
    } else {
      // means both element of arrays are in correct places
      break;
    }
  }
  a.sort((a, b) => a - b);
  b.sort((a, b) => a - b);
  console.log("Merged Arrays", a, b);
}

/*------------------------------BruteForce---------------------------------- */
function mergeTwoSortedArray_Approach_Brute(a, b) {
  //concept : Use extra array , store and sort
  // time : O((n+m)log(n+m)), space : O(N+M)
  printComplexityOfSolution(
    "Brute Force -extra array , sort and store",
    "O(klog(k)) k->min(n,m)",
    "O(n+m)",
  );
  console.log("arrays ", a, b);
  let ans = [];
  // step1: store all elements
  for (let value of a) {
    ans.push(value);
  }
  for (let value of b) ans.push(value);

  // step2: sort elements
  ans.sort((a, b) => a - b);
  console.log("Merged Array", ans);
  return;
}

let a = [2, 4, 7, 10];
let b = [2, 3];
mergeTwoSortedArray_Approach_Brute(a, b);
mergeTwoSortedArray_Approach_Better(a, b);
