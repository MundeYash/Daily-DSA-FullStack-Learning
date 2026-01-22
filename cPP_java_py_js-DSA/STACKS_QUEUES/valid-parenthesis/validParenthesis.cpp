#include <bits/stdc++.h>
using namespace std;
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
int main()
{

    string s = "()[]{}";
    cout << isParenthesis(s) << endl;
    return 0;
}