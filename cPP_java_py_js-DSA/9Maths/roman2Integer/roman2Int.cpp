// Given roman representation of number and we have to identify the corresponding integer value of it
#include <bits/stdc++.h>
#include "../../0commonFunctions/printComplexity.h"
using namespace std;

/*
HINT :
I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
 */
int romanToIntegerConversion_Approach_Brute(string s)
{

    // time : O(N) ->iterating over string
    // space : O(N) for hashmap
    // step 1 first map the characters
    int n = s.length();
    int ans = 0;

    unordered_map<char, int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    int i = 1;
    ans += mp[s[0]];
    // cout<<ans<<endl;
    while (i < n)
    {
        char ch = s[i];
        // cout<<ch<<",";
        if (ch == 'V' && s[i - 1] == 'I')
        {
            ans -= 2;
        }
        else if (ch == 'X' && s[i - 1] == 'I')
        {
            ans -= 2;
        }
        else if (ch == 'L' && s[i - 1] == 'X')
        {
            ans -= (2 * mp['X']);
        }
        else if (ch == 'C' && s[i - 1] == 'X')
        {
            ans -= (mp['X'] * 2);
        }
        else if (ch == 'D' && s[i - 1] == 'C')
        {
            ans -= (mp['C'] * 2);
        }
        else if (ch == 'M' && s[i - 1] == 'C')
        {
            ans -= (mp['C'] * 2);
        }
        ans += mp[ch];

        i++;
    }
    return ans;
}

int main()
{
    string s = "MMMXLV";
    cout << "Roman " << s << " -> Numeric: " << romanToIntegerConversion_Approach_Brute(s) << endl;
    return 0;
}