#include<bits/stdc++.h>
using namespace std ; 
/*

    CORE CONCEPT : (last element of array / vector ) for maintaining the front element 
*/
class Queue{
    public : 
        vector<int> arr; 

        // constructor 

        Queue(){

        }


        // push operation
        void push(int data){
            arr.push_back(data);
        } 


        // pop operation
        void pop(){
            arr.pop_back();// remove the last element 
        } 


        // front operation 

        // size function 


        // empty function 

};

int main(){
    
    cout<<"Implement queue using array "<<endl;
    return 0;
}