#include <bits/stdc++.h>
using namespace std;

char findFirstNonRepeatingCharApproach1_Better(string s)
{
    // Better Approach : Hash Map

    unordered_map<int, pair<int, int>> mp; // key  , (counter, index)
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        mp[ch].first++;
        mp[ch].second = i;
    }
    int minIndex = n;
    char ans = '$';
    for (auto i : mp)
    {
        if (i.second.first == 1)
        {
            if (i.second.second < minIndex)
            {
                minIndex = i.second.second;
            }
        }
    }
    if (minIndex == n)
        return '$';
    return s[minIndex];
}

// Helper function :which checks the existence of character in entire string
bool ifExists(int index, string s)
{
    char ch = s[index];
    for (int i = index + 1; i < s.length(); i++)
    {
        if (s[i] == ch)
            return true;
    }
    return false;
}
char findFirstNonRepeatingCharApproach1_BruteForce(string s)
{
    // Brute force approach

    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        // step 1 : check the current character if it exist in entire array
        if (!ifExists(i, s))
            return ch;
    }
    return '$';
}
int main()
{
    // EASY PROBLEM
    string s = "geeksforgeeks";
    cout << findFirstNonRepeatingCharApproach1_BruteForce(s) << endl;
    cout << findFirstNonRepeatingCharApproach1_Better(s) << endl;
    cout << "Find the first Non Repeating Element in the string " << endl;
    return 0;
}