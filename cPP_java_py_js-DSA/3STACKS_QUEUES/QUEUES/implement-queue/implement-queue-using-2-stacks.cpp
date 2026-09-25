#include<bits/stdc++.h>
using namespace std; 

// implementation of queue using two stacks 
/*
    TIME COMPLEXITY : O(N), sapce :O(N)
*/
class Queue{
    public: 
        stack<int>s1;
        stack<int>s2;

        Queue(){

        }

        //push operation 
        void push (int data ){
            // direct add elements to s2 
            s2.push(data);
            return;

        }


        //pop operation 
        void pop(){
            if(s2.empty())return ;
            
            // transfer the data from s2 -> s1 
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
            
            s1.pop();

            // place elements back to s1->s2
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            return ;

        }

        // front operation : to get element present at front of the stack
        int front(){
            int ans=-1;
            if(s2.empty())return ans;

            // transfer the data from s2 -> s1 
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
            
            ans = s1.top();

            // place elements back to s1->s2
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }


            return ans;

        }

        // empty function 
        bool empty(){
            return s2.empty();

        }

        // size function 
        int size(){
            return s2.size();
        }
};


int main(){
    Queue q;

    q.push(1); 
    q.push(2);
    q.push(3); 
    q.pop();
    q.push(4); 
    q.push(5); 
    cout<<"\nsize of queue is : "<<q.size()<<endl;

    while(!q.empty()){
        cout<<q.front()<<" ,";
        q.pop();
    }
    if(q.empty()){
        cout<<"\nQueue is empty "<<endl;
    }
    else cout<<"\nQueue is not empty "<<endl;
    return 0;
}