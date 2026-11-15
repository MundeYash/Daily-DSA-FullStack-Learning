// How to inbuilt Set data structure in js

let s = new Set(); 
s.add(20);
s.add(10); 
s.add(10);// will ignore duplicate value 

console.log("The set contains value", s );

// how to sort the set value 
console.log("To get all values of set->",s.values );
let temp = s.values; 
console.log("temp value ",temp);
// to get all values in set 

// s.clear();// function to clear all the values of the set 
console.log("Deleting a particular key from set via s.delete() | 20 is delete" );
s.delete(20);

const iterableValues = s.entries();
console.log("iterable values in the set ", iterableValues);

s.add("isVisible");
s.add(50); 
s.add(true); 
s.add(()=>{
console.log("sample addition ");
})

s.forEach((value ) => console.log(value)); // to iterate over entire set 
console.log("The set contains value", s );

/*

Important points to consider 
c++ vs js 
1. set creation 
set<int> s | let s = new Set() ; 

2.iterating over 
c++ 
 for(auto it: s ){
    
}
 
 
*/