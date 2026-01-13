// Problem : Given sorted array and we need remove all the duplicate elements and left behind only the non-duplicate element in the array 
/*------------------------------------------------------------ */ 

/*---Optimised Approach - StartIndex pointer and comparison--------------------------------------------------------- */ 

function removeDuplicatedSortedArray_Approach1_Optimised(arr){
    // concept : pointer for start index - In-place 
    // time :o(n), space :O(1)
    let n = arr.length;

    let startIndex =0; 
    let  count =0 ;
    for (let i=1; i<arr.length;i++){
        if (arr[i] != arr[startIndex]){
            startIndex++ ; 
            arr[startIndex] = arr[i];
            count ++ ; 
            

        }
    }
    
    for(let i= startIndex+1;i<n;i++){
        arr.pop();

    }
    console.log("After Removing duplicate elements ", arr );
    return count +1 ;
}
let arr = [2, 2, 2, 2, 2];
console.log(arr);
console.log(removeDuplicatedSortedArray_Approach1_Optimised(arr));
