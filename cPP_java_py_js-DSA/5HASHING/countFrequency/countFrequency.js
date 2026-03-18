import { printComplexityOfSolution } from "../../0commonFunctions/printComplexities.js";

// Given a array of integers/ given string , count the frequency of element/ character in the array / string respectively

// function for finding the number of characters in the string
function countFrequencyInstring(str) {
  console.log("input string is ", str);
  printComplexityOfSolution("Hash-Map basec solution", "O(n)", "O(n)");
  // concept: hashmap, time: O(n),space : O(n)
  let mp = new Map();

  for (let i = 0; i < str.length; i++) {
    if (!mp.has(str[i])) {
      mp.set(str[i], 1);
    } else {
      let val = mp.get(str[i]);
      val++;
      mp.set(str[i], val);
    }
  }
  console.log("map", mp);
}

// function for finding number of elements in the array
function countFrequencyInArray(arr) {
  printComplexityOfSolution("Hash-Map based solution", "O(n)", "O(n)");
  console.log("array elements", arr);
  let mp = new Map();
  for (let i = 0; i < arr.length; i++) {
    if (!mp.has(arr[i])) {
      mp.set(arr[i], 1); // intialize with 1 freq
    } else {
      let val = mp.get(arr[i]);
      val++;
      mp.set(arr[i], val);
    }
  }
  console.log("Map Elements ", mp);
}

let arr = [1, 2, 2, 3, 3, 4, 10, 10, 100, 100, 100];
let str = "abacadadfeaw";
countFrequencyInstring(str);
countFrequencyInArray(arr);
