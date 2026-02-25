
1. Difference between var, let , const

    Feature	var	let	const
    Scope	Function	Block	Block
    Hoisting	Yes	Yes (TDZ)	Yes (TDZ)
    Re-declare	Yes	❌ No	❌ No
    Re-assign	Yes	Yes	❌ No
    Use today	❌ Avoid	✅ Yes	✅ Yes

    We avoid var due to function scope and use let for variables and const for constants to prevent unintended reassignment


2.Hoisting 

    Hoisting is JavaScript’s default behavior of moving declarations to the top of their scope during memory creation phase.


3.Closures 
    Function + uska lexical scope = Closure”
    A closure is a function that remembers variables from its lexical scope even after the outer function has finished execution.

4.Different types of scoping in js 

    1. Global Scope:
        “Global scope should be avoided as it can cause naming conflicts.

    2.Function Scope
        Jo variable function ke andar declare ho (var, let, const)
    3.Block Scope 







