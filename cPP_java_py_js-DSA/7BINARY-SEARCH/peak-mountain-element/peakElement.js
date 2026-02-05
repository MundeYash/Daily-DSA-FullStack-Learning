import { printComplexityOfSolution } from "../../0commonFunctions/printComplexities.js";

// given  an array element and we have find the peak element in the array : peak element means element which greater than its adjacent neighbours, if multiple peak elements exists return any of them
var findPeakElement_Approach_brute = function(nums) {
    // peak greater than element and greater than right element , return is index 
        // brute force : linear 
        printComplexityOfSolution("brute: linear traversal","O(n)","O(1)");
        // 0 the and last element can be the peak element 
        let n = nums.length; 
        if(n==1 )return 0;
        for (let i=1 ;i<n-1 ;i++ ){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])return i ;
        }

        // check for first index and last index 
        if (nums[0]>nums[1])return 0 ; 
        if (nums[n-1]>nums[n-2])return n-1;
        return -1;
};
let arr = [1,2,3,5]; 
console.log(arr); 
let indexOfPeakElement =findPeakElement_Approach_brute(arr); 
console.log("Peak element ", "index= ",indexOfPeakElement , "| value =", arr[indexOfPeakElement] );