let arr = [1,2,3,4,5,6];
console.log("BEFORE : "+ arr);
reverseArray(arr);
function reverseArray(arr){
    // OPTIMISED APPROACH : TWO POINTER APPROACH
    let n = arr.length;
    let st=0 , en =n-1;
    while (st<en){
        [arr[st],arr[en]] =[arr[en],arr[st]];
        // swap(arr,st,en);
        st++;
        en--;
    }
    console.log("AFTER: ",arr);

}