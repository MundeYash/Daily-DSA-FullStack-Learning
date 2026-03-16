#include<bits/stdc++.h>
using namespace std  ;

class Animal{
    public: 
        string typeOfAnimal;
        int wt ; 
        int height;
        bool isCarnivore;


    // default constructor 
    Animal(string typeOfAnimal){
        this->typeOfAnimal = typeOfAnimal;

    }

    

    // available method 

    // print animal Details 
    void printAnimalDetials(){
        cout<<"Type of Animal"<<this->typeOfAnimal;
        cout<<"Weight :"<<this->wt<<"KG"<<endl;
        cout<<"Height :"<<this->height<<"Feet"<<endl;
        if(this->isCarnivore){
            cout<<"Carnivore animal"<<endl;
        }
        else{
            cout<<"No it is Herbivore animal"<<endl;
        }
    }

};
int main (){
    cout<<"OOPS concept in cpp";
    Animal lio ("Lion") ;

    return 0 ;
}