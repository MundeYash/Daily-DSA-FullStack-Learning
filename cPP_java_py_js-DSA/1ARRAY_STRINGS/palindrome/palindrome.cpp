// check palindrome - cPP code is pending
#include <bits/stdc++.h>
#include "../../0commonFunctions/printComplexity.h"
using namespace std;
bool checkPalindromeString_Approach_Optimised(string s)
{

    // concept : two pointer + comparison
    // time : O(n), space :O(1)
    printComplexities("O(n)", "O(1)");
    int st = 0, en = s.size() - 1;
    while (st < en)
    {
        if (s[st] != s[en])
            return false;
        st++;
        en--;
    }
    return true;
}
int main()
{
    string s = "naman";
    string s2 = "raman";
    cout << checkPalindromeString_Approach_Optimised(s) << endl;
    cout << checkPalindromeString_Approach_Optimised(s2) << endl;

    return 0;
}