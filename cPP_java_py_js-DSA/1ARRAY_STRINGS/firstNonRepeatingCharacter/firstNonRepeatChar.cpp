#include <bits/stdc++.h>
#include "../../commonFunctions/printComplexity.h"
using namespace std;

/*----------------------------------------------------------------------------------------*/
// Optimsed appraoch : first Non-Repeating character in stream.
string firstNonRepeatingCharInStream_Optimised(string &s)
{
    cout << "Input string " << s << endl;
    string ans = "";
    int n = s.size();
    vector<int> freq(26, 0);
    queue<char> q;

    for (int i = 0; i < n; i++)
    {

        // case 1 :
        int index = s[i] - 'a';

        freq[index]++;
        q.push(s[i]);

        while (!q.empty())
        {

            char ch = q.front();

            if (freq[ch - 'a'] > 1)
            {
                q.pop(); // repeating character
            }
            else
            {
                // this is answer non-repeating
                ans.push_back(ch);
                break;
            }
        }
        // either you got some answer or not
        if (q.empty())
        {
            // means don't get any ans
            ans.push_back('#');
        }
    }
    return ans;
}

/*-------------------------------Better Approach : Hash Map---------------------------------------------------------*/
char findFirstNonRepeatingCharApproach1_Better(string s)
{
    // Better Approach concept : Hash Map
    printComplexities("O(n)", "O(k)");

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

/*----------------------------------------------------------------------------------------*/
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
    // concept: check existence -
    // time:O(n^2), space :O(1)
    printComplexities("O(n^2)", "O(1)");

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
    string s2 = "india";
    cout << findFirstNonRepeatingCharApproach1_BruteForce(s) << endl;
    cout << findFirstNonRepeatingCharApproach1_Better(s) << endl;

    /*----------------------------------------variation2 ----------------------*/
    cout << "Median in Stream: " << firstNonRepeatingCharInStream_Optimised(s2) << endl;

    cout << "Find the first Non Repeating Element in the string " << endl;
    return 0;
}
/*

https://www.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1

*/