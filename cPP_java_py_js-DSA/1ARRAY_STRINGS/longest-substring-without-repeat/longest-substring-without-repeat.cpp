#include <bits/stdc++.h>
#include "../../0commonFunctions/printComplexity.h"
using namespace std;

/* Given an string , we have find the longest substring (contigious) without contains unique character and do not contains repeating characters and have maximum length*/

/*-------------------------------Optimised Approach --------------------------------*/
int lengthOfLongestSubstringUniqueCharacters_Approach_Optimised(string s)
{

    // concept :
    // time :
    // space :
}
/*------------------------------------------------Brute Force--------------------------------*/
// helper function
bool checkUnique(unordered_map<char, int> &mp)
{
    for (auto i : mp)
    {
        if (i.second > 1)
            return false;
    }
    return true;
}
int lengthOfLongestSubstringUniqueCharacters_Approach1_Brute(string s)
{

    // concept: sliding window, (hashing freq update) and maxLen
    // time : O(n*k) , space : O(k)
    printComplexities("O(n*k)", "O(k)");
    int maxLen = 0;
    int i = 0;
    int j = 0;
    int n = s.size();
    unordered_map<char, int> mp;
    vector<bool> freq(256, false);
    bool lastResult = true; // parameter to check whether window is shrinked or not

    while (i < n && j < n)
    {
        // update the freq and curr len
        if (lastResult == true)
            mp[s[j]]++;

        if (checkUnique(mp))
        {

            int currLen = (j - i + 1);
            maxLen = max(maxLen, currLen);

            j++;
            lastResult = true;
        }
        else
        {
            // window needs to be shrink
            mp[s[i]]--;
            i++;
            lastResult = false;
        }
    }

    return maxLen;
}
int main()
{

    string s = "pwwkew";
    string t2 = "bbbbb";
    cout << s << endl;
    cout << lengthOfLongestSubstringUniqueCharacters_Approach1_Brute(s) << endl;
    cout << lengthOfLongestSubstringUniqueCharacters_Approach1_Brute(t2) << endl;
}

/*
https://www.youtube.com/watch?v=-zSxTJkcdAo
*/