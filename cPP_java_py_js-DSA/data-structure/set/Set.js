function printSet(s) {
  console.log("Set values ");

  for (let val of s) {
    console.log(val + " ");
  }
}
let s = new Set();
console.log(s);

// 1. insert(value) operation = add(value) operation in set
s.add(2);
s.add(2); // duplicate values will not be inserted into set
s.add(4);
s.add(10);
printSet(s);

//2. erase(value) operation = delete(value) operation in set
s.delete(4);
printSet(s);

//3. find() method =  has() method in set
console.log(s.has(4));
console.log(s.has(2));

//4.check an element exist or not
if (s.has(4)) {
  console.log("Element exits");
} else {
  console.log("Not exists ");
}

//4.clear() method = clear() method in set also : delete all the values from set
// s.clear();

//5. size () method  = size property in set  = to get the size of set
console.log(s.size);

//6. iterating over set value : using forOf loop
for (let val of s) {
  console.log("value", val);
}
