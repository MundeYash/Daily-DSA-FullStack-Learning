// how to create a javascript class and use it method 
/*
    class keyword : it is used to declare a class
    constructor (): constructor keyword is used for declaring default constructor

*/

class Animal{
    // data members
    typeOfAnimal


    // default constructor 
    constructor(animalType){
        console.log("constructor called");
        this.typeOfAnimal  = animalType;
    }


}

// creating a object based on animal class 

let lio = new Animal ("lion");
console.log("printing object based on class Animal :",lio);