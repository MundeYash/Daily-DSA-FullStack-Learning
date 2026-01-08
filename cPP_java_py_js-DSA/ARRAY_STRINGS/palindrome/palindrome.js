// Problem Statement : Given a string and we have to check whether it is a palindrome or not.

let str = "naman"; 
let str2 = "suresh";
function checkPalindrome(str){
    let i=0 ,j=str.length-1;
    while (i<j){
        if (str[i]!=str[j])return false;
        i++;
        j--;
    }
    return true;
}
console.log("check palindrome for",str,checkPalindrome(str));
console.log("check palindrome for",str2,checkPalindrome(str2));