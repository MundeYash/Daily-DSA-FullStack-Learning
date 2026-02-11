#include <bits/stdc++.h>
#include "../../0commonFunctions/printComplexity.h"
using namespace std;

// Given an array of integers and we need to return the number of possible subarray that exits whose sum is equal to the k value
int countSubarraySumK(vector<int> arr, int n, int k)
{

    // brute force approach : explore all subarrays , find its sum and count it
    int count = 0;

    printComplexities("O(n^2)", "O(1)");

    for (int i = 0; i < n; i++)
    {
        int sum = 0; // first value of possible subarray
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
                count++;
            cout << sum << "| ";
        }
    }
    cout << "subarray sum ended\n";
    return count;
}

int main()
{
    cout << "Subarrays with k sum " << endl;

    vector<int> arr = {1, 2, 3};
    printArray(arr);
    int n = arr.size();
    int k = 3;
    cout << "The number of subarrays whose sums is K = " << k << endl
         << countSubarraySumK(arr, n, k) << endl;

    return 0;
}