import { printComplexityOfSolution } from "../../0commonFunctions/printComplexities.js";
// Given a number and we have evaulate the factorial value of it. factorial of 0 and 1 is 1

function factorialOfNumber_Approach_Brute(n) {
  // concept : simple recursion , time : O(n) ,space:O(n-> recursive stack space )
  printComplexityOfSolution("recursion", "O(n)", "O(n)");
  if (n <= 1) return 1;
  return n * factorialOfNumber_Approach_Brute(n - 1);
}

function factorialOfNumber_Approach_Optimised(n) {
  // memoization DP based solution
  // time : "O(n)" , space:"O(1)";
  printComplexityOfSolution("Dp- Memoized", "O(n)", "O(1)");

  let ans = 1;
  for (let i = n; i >= 1; i--) {
    ans = ans * i;
  }
  return ans;
}
let n = 5;
console.log(n);
console.log("factorial of", n, "is ", factorialOfNumber_Approach_Brute(n));
console.log("factorial of", n, "is ", factorialOfNumber_Approach_Optimised(n));
