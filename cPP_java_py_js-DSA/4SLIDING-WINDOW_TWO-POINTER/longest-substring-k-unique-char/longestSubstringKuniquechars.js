import {printComplexityOfSolution} from "../../0commonFunctions/printComplexities.js"
// Given a string and  k value , we need to find the length of longest substring which contains number of unique/distinct character exactly equals to k 




function longestSubstringOfKDistinctCharacters_Approach_Brute(s ,k){

    // concept : explore all substring , check  count of distinct chars , if condition satisfy = update the length 
    printComplexityOfSolution("Explore Substring","O(n^2)" , "O(1) - > due to fixed 26 size of characters");

    let n = s.length ; 
    let maxLen =0 ;

    for (let i=0 ;i<n ;i++ ){

        let arr = [];
        for (let j=0 ;j<26 ;j++ ){
            arr.push(0);
        }
        let distinctChars =0 ;

        for (let j=i ;j<n ;j++ ){
            let ch = Number(s[j] -'a');
            if(arr[ch]!=0 ){
                // this means first time updation 
                distinctChars ++ ;
            }
             arr[ch]++;

            if(distinctChars ==  k ){
                let len  = (j-i+1);
                maxLen = Math.max(maxLen, len);

            }

        }
    }
    return maxLen;


}

let  s = "aabacbebebe";
console.log(s);
let k = 3 ;
console.log("The longest substring of k unique chars is ",longestSubstringOfKDistinctCharacters_Approach_Brute(s,k),"\n");
