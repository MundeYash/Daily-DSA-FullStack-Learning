import { printComplexityOfSolution } from "../../0commonFunctions/printComplexities.js";

//Given two strings and we need to check whether they are permutation of each other or not
function validAnagramString_Approach_Brute(s, t) {
  // concept: brute - sorting + comparison
  // time : O(n log n);
  // space :O(1)
  printComplexityOfSolution("sorting+comparison", "O(n log n)", "O(1)");
  let n = s.length;
  let m = t.length;
  if (n != m) return false;

  // step1: sorting
  let sorted = s.split("").sort().join(""); // string are immutable in javasript and js
  s = sorted;
  sorted = t.split("").sort().join("");
  t = sorted;

  // step2 : comparison
  for (let i in s) {
    if (s[i] != t[i]) return false;
  }
  return true;
}

function validAnagramString_Approach_Optimised(s, t) {
  // concept : hashing + comparison
  // time :"O(n)"
  // space :O(n)

  printComplexityOfSolution("hashing + comparison", "O(n)", "O(n)");

  let n = s.length;
  let m = t.length;

  if (n !== m) return false;

  const freq = new Array(26).fill(0);

  for (let ch of s) {
    freq[ch.charCodeAt(0) - "a".charCodeAt(0)]++; // way to get ascii value in js
  }

  for (let ch of t) {
    freq[ch.charCodeAt(0) - "a".charCodeAt(0)]--;
  }

  for (let val of freq) {
    if (val !== 0) return false;
  }

  return true;
}

let s = "geeks";
let t = "kseeg";
console.log(s, " ", t);

console.log(validAnagramString_Approach_Brute(s, t));
console.log(validAnagramString_Approach_Optimised(s, t));
