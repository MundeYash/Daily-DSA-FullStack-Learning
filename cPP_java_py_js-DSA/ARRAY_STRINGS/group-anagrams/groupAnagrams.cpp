#include <bits/stdc++.h>
#include "../../commonFunctions/printComplexity.h"

using namespace std;

// Problem Statement : Given a list of strings and we need to return a list which contains group of anagrams.
// Two strings are anagrams if they contains equal elements/ character (it is rearrangement of one another)

vector<vector<string>> groupAnagrams_Approach_Brute(vector<string> &s)
{
    printStringArray(s);

    // concept - Hashing- unordered map  and sorting
    // time : O(n* klog(k)), space :O(n)
    printComplexities(" O(n* klog(k))", "O(n)");

    vector<vector<string>> ans;
    unordered_map<string, vector<string>> mp;

    for (int i = 0; i < s.size(); i++)
    {
        string temp = s[i];

        // sort and store original string
        sort(temp.begin(), temp.end());
        mp[temp].push_back(s[i]);
    }
    // extract the ans and return
    for (auto i : mp)
    {
        ans.push_back(i.second);
    }

    return ans;
}

int main()
{

    vector<string> s = {"cat", "dog", "god", "tca"};
    vector<vector<string>> ans = groupAnagrams_Approach_Brute(s);
    printStringOfStringArray(ans);

    return 0;
}