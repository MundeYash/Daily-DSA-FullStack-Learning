#include<bits/stdc++.h>
using namespace std; 

// Implementation of stack using single queue ()
// Approach - use current size before inserting elements and insert elements at the end of the stack 
//time :O(n), space :O(n-> single queue space )


class Stack{
    
    public: 
        queue<int>q;

        // constuctor 
        Stack(){

        }

        // push operation 
        void push(int data ){
            // step1 : store the current size 
            int currSize = q.size(); 
            
            // step2 : push the data which is to be inserted
            q.push(data); 
            
            while(currSize--){
                q.push(q.front()); 
                q.pop();

            }

            return ;

        }


        // pop operation 
        void pop(){
            if(q.empty()){
                cout<<"Stack is empty "<<endl;

            }
            q.pop();
            return ;

        }

        // top element 
        int top(){
            int ans =-1; 
            if(!q.empty()){
               ans = q.front();
            }
            return ans;

        }

        // empty function 
        bool empty(){
            return q.empty();
        }


        // size function 
        int size(){
            return q.size();
        }
};


int main (){
    cout<<"Stack implementation using Queue "<<endl;
    Stack s ; 
    s.push(20); 
    s.push(30); 
    s.push(90); 
    while (!s.empty()){
        cout<<s.top()<<", ";
        s.pop();
    }
    
    return 0;
}