#include <bits/stdc++.h>
#include "../../0commonFunctions/printComplexity.h"
using namespace std;

// Remove duplicate from sorted array  : Given an array of integers and we need to remove the duplicate elements from the sorted array

vector<int> removeDuplicatedFromSortedArray_Approach_Brute(vector<int> arr)
{

    printComplexities("O(n)-> array traversal  + O(N log n)->sorting ", "O(n)-> hashing map space");
    // concept: brute force : Map based , time : O(n log n )  , space : "O(n)"

    // Step1 : update the  frequency of elements
    unordered_map<int, bool> mp;
    vector<int> ans;
    for (auto val : arr)
    {
        mp[val] = true;
    }
    // Step2 :Iterate over map and  store the keys in ans array
    for (auto it : mp)
    {
        ans.push_back(it.first);
    }

    // sort the ans array and return it
    sort(ans.begin(), ans.end());

    return ans;
}

int main()
{
    cout << "Remove the Duplicates from sorted array " << endl;
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
    printArray(arr);
    vector<int> ans = removeDuplicatedFromSortedArray_Approach_Brute(arr);
    printArray(ans);
    return 0;
}