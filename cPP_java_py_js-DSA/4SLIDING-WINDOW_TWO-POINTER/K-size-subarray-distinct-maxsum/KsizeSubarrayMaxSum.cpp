#include <bits/stdc++.h>
#include "../../0commonFunctions/printComplexity.h"
using namespace std;
bool checkDistinct(unordered_map<int, int> freq)
{

    for (auto it : freq)
    {
        if (it.second > 1)
        {
            // means duplicate
            return false;
        }
    }
    return true;
}
int maxSumOfKsizeSubarray(vector<int> arr, int k, int n)
{
    // brute force : sliding window and hash map
    // time : O(n*k ) , space : O(n)-> due to hashmap
    printComplexities("O(n*k )", "O(n)");

    int maxSum = 0;

    // calculate first window
    unordered_map<int, int> freq;
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
        freq[arr[i]]++;
    }
    if (checkDistinct(freq))
        maxSum = max(maxSum, sum);
    int prevIndex = 0;

    // check for every possible window
    for (int i = k; i < n; i++)
    {

        // add current element into window and remove last element from window
        sum += arr[i];
        sum -= arr[prevIndex];

        freq[arr[i]]++;
        freq[arr[prevIndex]]--;

        prevIndex++; // udpate the prev pointer

        if (checkDistinct(freq))
            maxSum = max(maxSum, sum);
    }

    // return the ans
    return maxSum;
}

int main()
{
    cout << "find fixed k size subarray with distinct elements and evaluate maximum sum from it " << endl;

    vector<int> arr = {1, 5, 4, 2, 9, 9, 9};
    int k = 3;
    cout << maxSumOfKsizeSubarray(arr, k, arr.size()) << endl;

    return 0;
}