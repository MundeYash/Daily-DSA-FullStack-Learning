#include <bits/stdc++.h>
#include "../../commonFunctions/printComplexity.h"
using namespace std;
// Given an array of words and we need to find the no of distinct element in every window of size k

/*------------------------------Optimsed appraoch : ----------------------------------------------------------*/
int countUniqueElements(unordered_map<int, int> mp)
{
    int count = 0;
    for (auto it : mp)
    {
        if (it.second > 0)
            count++;
    }
    return count;
}

vector<int> countDistinctInEveryKsizeWindow_Approach_Optimised(vector<int> arr, int k)
{
    // step 1 : create first window of size of k

    unordered_map<int, int> freq;
    vector<int> ans;
    int i = 0, j = 0;
    int n = arr.size();
    while (j < k)
    {
        freq[arr[j]]++;
        j++;
    }
    int count = (countUniqueElements(freq));
    ans.push_back(count);

    // step 2: explore all window
    while (j < n)
    {
        freq[arr[i]]--;
        freq[arr[j]]++;
        if (freq[arr[i]] == 0)
        {
            freq.erase(arr[i]); // this is important step
        }

        i++;

        j++;
        ans.push_back(freq.size());
    }
    return ans;
}
vector<int> countDistinctInEveryKsizeWindow_Approach_Brute(vector<int> arr, int k)
{
    // concept: sliding window + hashing
    // time : O(n* k), space : O(1)
    printComplexities("O(n*k)", "O(n)");

    // step 1 : create first window of size of k

    unordered_map<int, int> freq;
    vector<int> ans;
    int i = 0, j = 0;
    int n = arr.size();
    while (j < k)
    {
        freq[arr[j]]++;
        j++;
    }
    ans.push_back(countUniqueElements(freq));

    // step 2: explore all window
    while (j < n)
    {

        freq[arr[j]]++;
        j++;
        freq[arr[i]]--;
        i++;
        ans.push_back(countUniqueElements(freq));
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 1, 3, 4, 2, 3};
    printArray(arr);
    int k = 4;
    vector<int> ans = countDistinctInEveryKsizeWindow_Approach_Brute(arr, k);
    printArray(ans);
    return 0;
}