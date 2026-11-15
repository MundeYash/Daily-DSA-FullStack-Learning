#include<bits/stdc++.h>
using namespace std; 


// Recursive approach : Implementing queue using the stack

// time :O(n*k), // space : O(N)-> single stack + recursive call stack 
class Queue{

    private: 
    
    void solve(stack<int>&st , int data ){
        if(st.empty()){
            st.push(data);
            return ;
        }

        // store current element 
        int element = st.top(); 
        st.pop(); 
        solve(st,data);
        st.push(element);
    }

   
    public : 
        stack<int>st; 

    
    Queue(){

    }

    // push operation 
    void push(int data ){
        // direct add it to the stack 
        solve(st,data);

    }

    // pop operation 

    void pop(){
        // get the lowermost element 
        if(st.empty())return ; 
        st.pop(); 

        return ;
        

    }

    // front operation 
    int front(){
        int ans =-1;
        if(!st.empty())ans = st.top(); 
        return ans;
    }

    // size function
    int size(){
        return st.size();

    } 

    // empty function 

    bool empty(){
       
        return st.empty();
    }
};
int main (){

    Queue q; 
    q.push(1);
    q.push(2);

    q.push(3);
    q.push(4);
    q.pop();
    q.push(5);
    q.push(10);

    while (!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    cout<<"\nImplementation of queue using stack "<<endl;
    return 0 ;  
}
