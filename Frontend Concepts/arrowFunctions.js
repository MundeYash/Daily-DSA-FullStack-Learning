// 1.Arrow function : consize way of writing the functions

    // syntax 
    const functionName = ()=>{
        // work of function 
        console.log("hi this is arrow function format");
    }
    // single line statement for executing in arrow function
    const addV2 = (a,b) => a+b; // one line way of writing arrow function which return something
        // calling of arrow function 
        functionName();
        let sum =addV2(10,20) ;
        console.log(sum);


// 2. arguments keyword does not work in arrow function , use spread operator to access it 
    let addValues = (...variableNameForSpreadOperator)=>{
        console.log(variableNameForSpreadOperator);
    }

    addValues("a","b",10);
//3. hoisting in arrow function : arrow function does not hoist, while it works fine case of normal functions
    sayHello(); // here this is valid due to hoisting 
    function sayHello(){
        console.log("hello ");
    }
    // sayHello2();// this function call will give reference error - because hoisting does not work in arrow functions
    const sayHello2 = ()=>{
        console.log("hola");

    }

// global : window object is accessed using `this` in arrow

    let obj1 ={
        value : 20,
        myFunction : function (a,b){ // normal function
            console.log(this.value); 
            console.log(this.a, this.b);// becauese a , b does not exists in their scope of this 
            console.log(a,b);
            console.log("THIS",this);
        }
    }
    console.log("this keyword");
    obj1.myFunction(29,30);

    let obj2 ={
        value : 20,
        myFunction : (a,b)=>{
            console.log(this.value); 
            console.log(this.a, this.b);// becauese a , b does not exists in their scope of this 
            console.log(a,b);
        console.log("THIS",this);
        }
    }
    console.log("this keyword inside arrow function",);
    obj2.myFunction(29,30);
