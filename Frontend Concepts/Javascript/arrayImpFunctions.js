// Important function(higher order functions in array )

// forEach method (Higher-order-function ) : does not change original array , does not return anything like new array 

let arr = [1, 2, 3, 4];
let print = (a) => console.log(a);
arr.forEach(print);


// map method : modify the original array  , it return a new array 
let newArray = arr.map((a)=> (2*a));
console.log(newArray);
console.log(arr ); // original array does not get change 


// filter method : gives new array with filtered value 
let filteredArray = arr.filter((item)=>(item &1 )); // will extract odd values 
console.log("filtered value is ", filteredArray);

// reduce method : it gives a single value 


// find method 
console.log('find method ',arr.find( (number)=> number ==4  )); /// it will return value 
console.log('findIndex method', arr.findIndex((num)=> num ==3));// it will return index 

console.log('includes method ' , arr.includes(2)); // it will boolean

// includes method 


// slice method : does not modify the original array 
let slicedArray = arr.slice(1,4); // it give a subarray ( from start index to endIndex -1 )
console.log("slice arr ",slicedArray);
console.log(arr);

// splice method : it modifies the original array 
let splicedArray = arr.splice(1,4); 
console.log("spliced array ", splicedArray); 
console.log(arr);// here original array is modified 




