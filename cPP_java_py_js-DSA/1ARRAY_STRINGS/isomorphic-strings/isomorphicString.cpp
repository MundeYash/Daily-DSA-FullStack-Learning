#include <bits/stdc++.h>
#include "../../0commonFunctions/printComplexity.h"
using namespace std;
// Given Two strings of equal length and we need to check whether they are isomorphic or not , means if we map charater of one string s with string t , it should match along with maintain the same order

bool isIsomorphicString(string s, string t)
{
    // concept : hashmap + mapping of character
    // time : O(n), space: O(n)
    printComplexities("O(n)", "O(n)");
    cout << s << endl
         << t << endl;
    unordered_map<char, char> mp;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (mp.find(ch) == mp.end())
        {
            // means first time addition of this new character of string

            // make mapping of this character of string s with same index character of string t
            mp[ch] = t[i];
        }
        else
        {
            // check it with mapped value
            if (mp[s[i]] != t[i])
                return false;
        }
    }

    return true; // if every character is mapped
}
int main()
{
    string s = "egg";
    string t = "add";
    string s2 = "bbbaaaba";
    string t2 = "aaabbbba";
    if (isIsomorphicString(s2, t2))
    {
        cout << "Isomorphic string";
    }
    else
    {
        cout << "Not an isomorphic string";
    }

    return 0;
}