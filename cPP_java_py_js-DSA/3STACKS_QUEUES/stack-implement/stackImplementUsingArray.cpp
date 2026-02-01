#include<bits/stdc++.h>
using namespace std;
// Implement the stack data structure using the array (OOPs- concept)

class Stack{
    public : 
        int topIndex;
        int size ; 
        int* arr ;

    // constructor 

    Stack(int sizeOfStack){
        size = sizeOfStack; 
        topIndex = -1 ;
        arr = new int [sizeOfStack];
    }


    // operations in stack

    // push() 
    void push(int data ){
        if (topIndex == size -1 ){
            // invalid case of adding element 
            cout<<"Stack overflow"<<endl;

        }
        else{
            // step1 : increase the topIndex 
            arr[++topIndex ] =data ;
            
        }
    }

    // pop() 
    void pop(){
        if (topIndex ==-1 ){
            cout<<"Stack is underflow"<<endl;
        }
        else{
            topIndex--;
        }
    }

    // size()
    int sizeofStack(){
        if (topIndex ==-1 )return 0;
        else return (topIndex +1 );
    }

    // top()
    int top(){
        int ans =-1;
        if(topIndex ==-1 ){
            cout<<"Stack is empty"<<endl;
        }
        else {
            ans = arr[topIndex];
        }
        return ans;
    }
    
    // empty()

    bool empty(){
        if (topIndex == -1 ){
            return true ;
        }
        else{
            return false;
        }
    }
};

int main(){
 Stack s(4);
 s.push(10); 
cout<<s.top()<<endl;
s.pop(); 
s.pop(); 
s.push(20); 
cout<<((s.empty())  ? "empty":"Not empty")<<endl;

}