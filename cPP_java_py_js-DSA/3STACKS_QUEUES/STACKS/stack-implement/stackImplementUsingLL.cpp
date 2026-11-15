#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Stack
{
private:
    Node *topNode; // top of stack

public:
    Stack()
    {
        topNode = NULL;
    }

    // Push operation
    void push(int x)
    {
        Node *newNode = new Node(x);
        newNode->next = topNode;
        topNode = newNode;
    }

    // Pop operation
    void pop()
    {
        if (topNode == NULL)
        {
            cout << "Stack Underflow\n";
            return;
        }
        Node *temp = topNode;
        topNode = topNode->next;
        delete temp;
    }

    // Top operation
    int top()
    {
        if (topNode == NULL)
        {
            cout << "Stack is Empty\n";
            return -1;
        }
        return topNode->data;
    }

    // isEmpty
    bool isEmpty()
    {
        return topNode == NULL;
    }
};

int main()
{

    return 0;
}