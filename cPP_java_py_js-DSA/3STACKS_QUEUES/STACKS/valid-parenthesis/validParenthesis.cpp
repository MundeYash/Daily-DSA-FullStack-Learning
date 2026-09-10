#include <bits/stdc++.h>
#include "../../0commonFunctions/printComplexity.h"
using namespace std;

/*Given a expression containing brackets and we have to check whether the expression of bracket is balanced or not  */
bool isParenthesis(string s)
{
    int n = s.size();

    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else if (ch == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        else if (ch == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        else if (ch == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if (!st.empty())
        return false;
    return true;
}
void validParenthesis_Optimsed(string s)
{

    // concept : stack and comparison of counter brackets
    // time : O(n), space:O(1);
    printComplexities("O(n)", "O(k)");
    cout << s << " is : ";
    if (isParenthesis(s))
    {
        cout << "Balanced string";
    }
    else
    {
        cout << "Not balanced string";
    }
    cout << endl;
}
int main()
{

    string s = "()[]{}";
    string s2 = "(]";
    validParenthesis_Optimsed(s);
    validParenthesis_Optimsed(s2);
    return 0;
}