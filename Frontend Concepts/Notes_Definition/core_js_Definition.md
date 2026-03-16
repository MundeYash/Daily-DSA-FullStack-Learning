
1. Difference between var, let , const

    Feature	var	let	const
    Scope	Function	Block	Block
    Hoisting	Yes	Yes (TDZ)	Yes (TDZ)
    Re-declare	Yes	❌ No	❌ No
    Re-assign	Yes	Yes	❌ No
    Use today	❌ Avoid	✅ Yes	✅ Yes

    We avoid var due to function scope and use let for variables and const for constants to prevent unintended reassignment


2.Hoisting 

    Hoisting is JavaScript’s default behavior of moving declarations(functions declaration and variable declaration) to the top of their scope during memory creation phase.


3.Closures 
    Function + uska lexical scope = Closure”
    A closure is a function that remembers variables from its lexical scope even after the outer function has finished execution.

4.Different types of scoping in js 

    1. Global Scope:
        “Global scope should be avoided as it can cause naming conflicts.

    2.Function Scope
        Jo variable function ke andar declare ho (var, let, const)
    3.Block Scope
        curly braces {} ke inside declared functions and variables are blocked scoped
         


---------------------------------------------------------------------------------------
How Javascript code is executed?

Phase 1 : Memory creation phase (Execution context)| Creation Phase 
Phase 2 : Code execution phase

Call Stack : call stack maintains the order of execution of execution context.
Javascript Engine:
Execution Context :



Hoisting : 





