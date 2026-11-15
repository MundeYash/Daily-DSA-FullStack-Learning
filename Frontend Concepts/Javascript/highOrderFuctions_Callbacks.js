// high order function : functions in which other functions are passed as arguments(call backs) or return a function

const greetAndFindSum=(a,callback)=>{
    console.log(a);
    console.log("type checking",typeof(a), typeof(callback));
    let value1 =10 , value2 = 20;
    callback(value1, value2);
}

/*------------ways to pass call-back ------- */
greetAndFindSum("Good Morning",function(a,b){
    console.log("The sum value is ",(a+b));
})
greetAndFindSum("namaste ji ", ()=>{
    console.log('bar bar access karo');

})

let multiplyTwoNumbers = (a,b)=>{
    console.log(a*b);
}
greetAndFindSum("hola everyone",multiplyTwoNumbers);


// call backs and call backs hell : function which are passed as argument is executed after some work
