#include<bits/stdc++.h>
using namespace std; 

// Node class creation 
class Node{
    public : 
        int data ; 
        Node* next; 

    // default contructor to intialize node
    Node(int val){
        this->data = val; 
        this->next = NULL ;
    }
};


//METHOD-1: insert some node to linked list in front 
void insertNodeToFrontInLL(Node* &head , int data ){

    Node* temp = new Node(data); 
    temp->next = head; 
    // Re-Points head back to start (temp is head now )
    head = temp;
    return ;

}

//METHOD-2:insert node to linked list to end of linked List 
void insertNodeToEndInLL(Node* &head , int data ){
    
    //1. first move head to last node of given linked list (for inserting end )
    Node*temp = head;
    while (temp->next){
        temp= temp->next;  
    }
    //2. Create new node with given data 
    Node* newNode = new Node(data); 
    // Re-Points head back to start (temp is head now )
    temp->next = newNode;
    return ;

}
//METHOD-3: insert node in the someWhere middle of linked list 
void insertNodeToMiddleOfLL(Node*&head,int pos, int data){
    //step1: first place your temp pointer 1 place before position 
    if(pos==0 ){
        // insert at start concept 
        insertNodeToFrontInLL(head,data);
    }
    else{
        pos--;
        int count =1 ; 
        Node* temp = head;
        while (count <pos && temp){

            temp = temp->next;
            count ++ ;
        }
        // Step1 : create new node with given data 
        Node* newNode = new Node(data); 

        // Step2 : connect next with newNode
        newNode->next = temp->next;

        //Step3: connect temp next with new Node 
        temp->next = newNode;

    }

    return ;
}

// function to print linked list 
void printLL(Node* head ){
    cout<<"(";
    while (head ){
        cout<<head->data;
        if(head->next != NULL )cout<<"->";
        
        
        head = head->next;  
    }
    cout<<")\n";
    return;
}
int main (){
    cout<<"\n\n";
    Node* head  = new Node(45); 
    insertNodeToFrontInLL(head,35);
    insertNodeToFrontInLL(head,25);
    insertNodeToEndInLL(head,50);
    insertNodeToMiddleOfLL(head,2,30);
    printLL(head);
    insertNodeToFrontInLL(head,15);
    insertNodeToFrontInLL(head,5);
    insertNodeToEndInLL(head,55);
    printLL(head);

    


    return 0 ;
}