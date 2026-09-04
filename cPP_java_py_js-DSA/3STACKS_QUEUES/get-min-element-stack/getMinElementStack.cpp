#include <bits/stdc++.h>
using namespace std;

// Implement a class which generates min of stack in o(1)

class minStack2
{
    // Optimised Approach : TIME O(N) , space :O(1)
    // concept : using FORMULA (2*curr - min) for push | (2*min-curr) for pop operation

    // public members
public:
    int mini;
    stack<int> st;

    // constuctor
    minStack2()
    {
        // intialize the mini variable
        mini = INT_MAX;
    }

    // push operation
    void push(int data)
    {
        if (st.empty())
        {
            // first time insertion of element
            st.push(data);
            mini = data;
        }
        else
        {
            // compare value of data with mini
            if (data < mini)
            {
                int value = (2 * data - mini);
                mini = data;
                st.push(value);
            }
            else
            {
                st.push(data);
            }
        }

        return;
    }

    // pop operation
    int pop()
    {
        if (st.empty())
        {
            cout << "Stack is empty " << endl;
            return -1;
        }
        int data = st.top();
        st.pop();
        int ans = -1;

        if (data > mini)
        {
            ans = data;
        }
        else
        {

            if (data > mini)
            {
                int value = (2 * mini - data);
                mini = value;
                ans = value;
            }
        }
        return ans;
    }

    // top operation
    int top()
    {
        if (st.empty())
            return -1;

        int data = st.top();
        int ans = -1;
        if (data < mini)
        {
            ans = mini;
        }
        else
        {
            ans = data;
        }

        return ans;
    }

    // getMin operation
    int getMin()
    {
        int ans = -1;
        if (st.empty())
        {
            return -1;
        }

        else
        {
            ans = mini;
        }
        return ans;
    }
};

class minStack
{
    /*
        TIME COMPLEXITY: O(n), space : O(N)
     */
    // public variables
public:
    stack<int> st;
    stack<int> update;
    int mini;

    // constructor
    minStack()
    {
        mini = INT_MAX;
    }

    // push operation
    void push(int value)
    {
        st.push(value);
        mini = min(value, mini);
        update.push(mini);
        return;
    }

    // pop opeartion
    void pop()
    {
        // remove element and update mini variable
        st.pop();
        update.pop();

        if (st.empty())
            mini = INT_MAX;
        else
            mini = update.top();
        return;
    }

    // peek/ top element of stack
    int top()
    {
        if (st.empty())
            cout << "Stack is empty" << endl;
        int ans = st.top();

        return ans;
    }

    // getMini()-> get minimum element of the stack
    int getMin()
    {
        if (update.empty())
            cout << "Stack is empty" << endl;
        int ans = mini;
        return ans;
    }
};


class minStackBrute{
    // Brute force approach : TIME: O(n*k), SPACE : O(1) for getting minimum element 
    private : 
    int findMimumElementInStack(stack<int>st){
        int ans = -1; 
        if(st.empty())return ans;
        while(!st.empty()){
            ans = min(ans,st.top()); 
            st.pop();
        }
        return ans;

    }

    public : 
    int mini; 
    stack<int>st; 

    // constructor 
    minStackBrute(){
        mini = INT_MAX;
    }

    // push operation 
    void push(int data){
        st.push(data);
        return ;

    }

    // pop operation 
    void pop(){
        if(st.empty()) cout<<"Stack is empty "<<endl;
        st.pop();
    }

    // top element 
    int top(){
        int ans =-1;
        if(st.empty())return ans;
        ans = st.top(); 
        return ans;
    }


    // getMin  element 
    int getMin(){
        // take another helper function for calculating minimum elements 
        int ans = findMimumElementInStack(st);
        return ans;
    }

};
int main()
{
    // minStack mt;
    // mt.push(10);
    // mt.push(30) ;
    // cout<<mt.top()<<endl;;
    // mt.pop();
    // cout<<mt.getMin()<<endl;;
    // mt.push(40);
    // cout<<mt.getMin()<<endl;

    /*-------------------------------------------- */

    minStackBrute mt2;
    mt2.push(10);
    mt2.push(40);
    mt2.push(2);
    mt2.push(-10);
    // mt2.pop();
    cout << mt2.top() << endl;
    cout << mt2.getMin() << endl;
    mt2.push(6);
    cout << mt2.top() << endl;
    cout << mt2.getMin() << endl;

    return 0;
}
