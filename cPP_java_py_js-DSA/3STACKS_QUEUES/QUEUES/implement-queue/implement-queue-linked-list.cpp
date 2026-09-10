//Implementation of queue using linked-list 
#include<bits/stdc++.h>
using namespace std;


class Node{
    public : 
    int data; 
    Node* next; 

    // constructor 
    Node(int d ){
        this->data =d ; 
        this->next = NULL;


    }

};

void deletionAtHead(Node* &head){
    if(!head)return ; 
    Node* temp = head; 
    head = head->next; 
    delete temp ;
    return ;

}
void insertionAtTail(Node* &tail ,Node* &head, int data ){
    Node* newNode = new Node(data); 
    if(!head && !tail){
        // first time insertion 
        
        head= newNode; 
        tail = newNode ; 
        return ;

    }
    else{
        // head exists 
        tail->next =newNode; 
        tail = newNode;

    }
    return ;
}
class Queue{
// 
 public:
    Node* head; 
    Node* tail; 
    int n ;
    
    // consturctor 
    Queue(){
        head= NULL ; 
        tail = NULL ;
        n=0;
    }


    // operations
    void push(int data ){
        insertionAtTail(tail,head,data);
        n++;
        return;
    }

    // pop operation 
    void pop(){
        deletionAtHead(head); 
        n--; 
        return;
        

    }

    // front operation 
    int front(){
        int ans =-1; 
        if(!head)return ans ; 
        ans = head->data; 
        return ans;

    }
    // empty function 
    bool empty(){
        if(n==0)return true; 
        return false;


    }

    //size function 
    int size(){
        return n;
    }
};

int main(){

    Queue q; 
    q.push(10); 
    q.push(20); 
    // q.pop(); 
    while (!q.empty()){
        
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;


    return 0 ;
}