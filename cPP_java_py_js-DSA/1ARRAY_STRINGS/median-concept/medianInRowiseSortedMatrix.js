
// Problem Statement : Given a  matrix in which each row is sorted and we have find the median of this matrix elements
/*Optimised Approach : pending (binary search based solution ) ---------------------------------------------------------------------------*/

/*Brute Force Approach :--------------------------------------------------------------------------*/

// helper functions
function findMedianInSortedArray(arr) {
  let n = arr.length;
  if (n % 2 == 0) {
    return arr[n / 2 - 1];
  } else {
    return arr[(n + 1) / 2 - 1];
  }
}
function medianInRowiseSortedMatrix_Approach1_BruteForce(matrix) {
  // concept : flat the matrix , store it , sort it and apply median in matrix logic
  let arr = [];
  for (x of matrix) {
    for (y of x) {
      arr.push(y);
    }
  }
  arr.sort((a, b) => a - b); // sorting increasing order
  return findMedianInSortedArray(arr);
}


// calling part

let matrix = [
  [1, 3, 5],
  [2, 6, 9],
  [3, 6, 9],
];
let matrix2 = [
  [2, 4, 9],
  [3, 6, 7],
  [4, 7, 10],
];
let matrix3 = [[3], [4], [8]];
console.log("printing matrix values ", matrix);
const ans = medianInRowiseSortedMatrix_Approach1_BruteForce(matrix);
console.log("The median of rowise sorted matrix is :", ans);
console.log(
  "The median of rowise sorted matrix is :",
  medianInRowiseSortedMatrix_Approach1_BruteForce(matrix2)
);
console.log(
  "The median of rowise sorted matrix is :",
  medianInRowiseSortedMatrix_Approach1_BruteForce(matrix3)
);

/**
 Median in a rowise sorted matrix 

 */