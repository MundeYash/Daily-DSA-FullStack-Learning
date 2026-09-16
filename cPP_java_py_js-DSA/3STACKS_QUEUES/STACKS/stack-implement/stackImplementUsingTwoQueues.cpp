#include<bits/stdc++.h>
using namespace std; 

// implement the stack class using Two Queues | Brute force approach (core idea is element transfer )

class Stack{

 private:
    queue<int>q1;
    queue<int>q2;

public:

    void push(int data ){

        // time : O(n), space:O(n)
        
        // transfer all elements of q1 into q2 
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        // step2 : add element in q1 
        q1.push(data); 
        
        // step3 : tranfer elements back to q1 from q2 
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }

        // now top element of stack is persent in front of q1
        return ;

    }

    void pop(){
        if(q1.empty()){
            cout<<"Stack is underflow "<<endl;

        }
        q1.pop(); // revove the top element of stack
        return ;

    }

    int top(){
        if(q1.empty()){
            cout<<"Underflow Stack is empty"<<endl;
            return -1;
        }
        
        return q1.front();
    }
    
    bool isEmpty(){
        return q1.empty();

    }
     
    int size(){
        return q1.size();
    }

};

int main()
{
    cout<<"This is stack Implementation using Two queues"<<endl;
    Stack st; 
    st.push(10);
    st.push(30); 
    // st.pop();
    while(!st.isEmpty()){
        cout<<st.top()<<", ";
        st.pop();
    }
    return 0 ;
}