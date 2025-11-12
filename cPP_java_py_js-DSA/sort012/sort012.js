console.log((333/4));
let arr =[0, 1, 2, 0, 1, 2, 1, 0];
console.log(arr);

// Approach 1: sorting Approach

//Approach2: count method 
function sort012CountMethod(arr){
    console.log("Before sort: ",arr);
    let count0=0, count1=0, count2=0; 
    
    for (let i=0;i<arr.length;i++){
        if(arr[i] ==0)count0++;
        else if (arr[i] == 1)count1++ ;
        else if (arr[i] == 2) count2++;
    }
    
    // arrangement of elements
    for (let i=0;i<count0;i++){
        arr[i]=0;
    }
    for(let i=count0;i<(count0 + count1);i++){
        arr[i]=1;
    }
    for (let i= (count0+count1);i<arr.length;i++){
        arr[i]=2;
    }
    console.log("After sort:", arr);
}
//Approach 3: Duetchse National Flag algorithm method 




// function calling 
console.log(arr);
sort012CountMethod(arr);