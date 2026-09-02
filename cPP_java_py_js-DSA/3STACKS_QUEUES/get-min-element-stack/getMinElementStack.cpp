#include<bits/stdc++.h>
using namespace std; 

// Implement a class which generates min of stack in o(1)




class minStack{
    // public variables 
    public:

     stack<int>st ; 
     stack<int>update;
     int mini;

    // constructor 
    minStack(){
        mini = INT_MAX;

    }

    // push operation 
    void push(int value ){
        st.push(value);
        mini = min(value,mini);
        update.push(mini);
        return;

    }

    // pop opeartion 
    void pop(){
        // remove element and update mini variable 
        st.pop(); 
        update.pop(); 

        if(st.empty())mini= INT_MAX;
        else mini  = update.top();
        return ;
        
    }

    // peek/ top element of stack 
    int top(){
        if(st.empty())cout<<"Stack is empty"<<endl;
        int ans =st.top(); 


        return ans;
    }

    // getMini()-> get minimum element of the stack 
    int getMin(){
        if(update.empty())cout<<"Stack is empty"<<endl;
        int ans = update.top(); 
        return ans;

    }
};

int main(){
    minStack mt; 
    mt.push(10); 
    mt.push(30) ;
    cout<<mt.top()<<endl;;
    mt.pop(); 
    cout<<mt.getMin()<<endl;; 
    mt.push(40);
    cout<<mt.getMin()<<endl;

    return 0 ;
}
