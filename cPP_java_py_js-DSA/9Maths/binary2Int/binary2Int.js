import { printComplexityOfSolution } from "../../0commonFunctions/printComplexities.js";

// Given a binary representation of a number  and we have to find the number
let binaryValue = "100";

function convertBinaryToInt_Approach_Optimised(s) {
  printComplexityOfSolution(
    "simple bit check and calculate pow",
    "O(n)",
    "O(1)",
  );
  // step 1 : iterate from last and check
  let n = s.length;
  console.log("binary value", s);
  let count = 0;
  let ans = 0;
  for (let i = n - 1; i >= 0; i--) {
    if (s[i] === "1") {
      ans += Math.pow(2, count);
    }
    count++;
  }
  console.log("number is ", ans);
  return ans;
}
convertBinaryToInt_Approach_Optimised(binaryValue);
