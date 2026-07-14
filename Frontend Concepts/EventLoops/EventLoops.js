//synchronous code : sequential and single thread execution of code , code execution at same time

console.log("start");
function sayMyName() {
  console.log("yash munde");
}
setTimeout(sayMyName, 1000);
// asynchronous code: code which does not execute at same time , code with is executing in parellel
console.log("end");


// important termn in event LOOP : call-stack , callback-Queue/macrotask queue, microstask queue , browser-web-api

 