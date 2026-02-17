// Given a number and we need to find the nth term of fibonacci series where first term is 0 and second term is 1 , next term is sum of previous two terms , // 0 1 1

function nthTermOfFibbonacciSeries_Approach_Brute(n) {
  // concept : recursion , time : "O(n)" , space :"O(1)"

  // base case
  if (n <= 1) return n;

  // recursive case
  return (
    nthTermOfFibbonacciSeries_Approach_Brute(n - 1) +
    nthTermOfFibbonacciSeries_Approach_Brute(n - 2)
  );
}

function nthTermOfFibbonacciSeries_Approach_Optimsed(n) {
  // concept : memoized DP
  // evalute first two terms and find consecutive remaining

  // time : "O(n)" ,space :O(1)
  if (n <= 1) return n;
  let first = 0,
    second = 1;
  let ans = 0;
  for (let i = 2; i <= n; i++) {
    ans = first + second;
    first = second;
    second = ans;
  }
  return ans;
}
let n = 4;
console.log(n);

console.log(nthTermOfFibbonacciSeries_Approach_Brute(4));
console.log(nthTermOfFibbonacciSeries_Approach_Optimsed(8));
