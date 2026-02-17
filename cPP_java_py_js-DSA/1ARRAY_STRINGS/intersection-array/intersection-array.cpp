#include <bits/stdc++.h>
#include "../../0commonFunctions/printComplexity.h"
using namespace std;

/*Given an array of integers and we need to find the intersection (common elements) of the array, no consider repeating elements
Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]

*/
// Better Approach
vector<int> arrayIntersection_Approach_Brute(vector<int> arr1, vector<int> arr2)
{

    printComplexities("O(n log n)", "O(k)");
    // concept  : sorting and two pointer comparison, .back() function usage
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    int i = 0, j = 0;
    int n = arr1.size();
    int m = arr2.size();
    vector<int> ans;

    while (i < n && j < m)
    {

        // smaller value
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        // greater value case
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        // both have equal values
        if (arr1[i] == arr2[j])
        {
            if (ans.size() == 0 || ans.back() != arr1[i])
            {
                ans.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    return ans;
}

// Brute force : hasing based solution

vector<int> arrayIntersection_Approach_Better(vector<int> a, vector<int> b)
{
    // concept : hasing , time : O max(n,m) , space : O (max(n,m))
    printComplexities("O(min(n,m))", "O(min(n,m))");

    vector<int> ans;

    // step1 : iterate over both array and update the frequency in same map
    unordered_map<int, pair<int, int>> mp;
    for (auto value : a)
    {
        mp[value].first++;
    }

    for (auto value : b)
    {
        mp[value].second++;
    }

    // step2 : iterate over map to find the common element on both
    for (auto it : mp)
    {
        int k = min(it.second.first, it.second.second);
        if(k!=0)ans.push_back(it.first);
    }
    return ans;
}
int main()
{

    vector<int> arr1 = {1, 2, 2, 1};
    vector<int> arr2 = {2, 2};
    printArray(arr1);
    printArray(arr2);
    lineSeperator();
    vector<int> ans = arrayIntersection_Approach_Better(arr1, arr2);
    printArray(ans);
    lineSeperator();
    vector<int> ans2 = arrayIntersection_Approach_Brute(arr1, arr2);
    printArray(ans2);
    lineSeperator();
    return 0;
}