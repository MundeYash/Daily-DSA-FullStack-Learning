#include <bits/stdc++.h>
using namespace std;

/*

    SORT A STACK :  given an unsorted stack and we need to sort it in increasing or decreasing order

    core concept : Recursion and insert element with some condition
    time : O(N*K)-> allmost liner time
    space : O(N)-> recursive stack space

*/

void insertAtSortedBottomInStack(stack<int> &st, int element)
{
    if (st.empty() || st.top() >= element)
    {
        st.push(element);
        return;
    }
    int value = st.top();
    st.pop();

    insertAtSortedBottomInStack(st, element);
    st.push(value);
}

void sortAStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    // step1 : pick a element
    int element = st.top();
    st.pop();

    // recursive call
    sortAStack(st);

    insertAtSortedBottomInStack(st, element);
}

void printStack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << ", ";
        st.pop();
    }
    cout << endl;
}
int main()
{

    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(1);
    st.push(10);
    st.push(8);
    printStack(st);
    sortAStack(st);
    printStack(st);

    cout << "\nSort a Stack implementation" << endl;
    return 0;
}