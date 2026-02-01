#include <bits/stdc++.h>
#include "../../0commonFunctions/printComplexity.h"
using namespace std;

// Brute force Approach
vector<int> arrayIntersection_BruteForce(vector<int> arr1, vector<int> arr2)
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
int main()
{

    vector<int> arr1 = {1, 2, 2, 1};
    vector<int> arr2 = {2, 2};
    printArray(arr1);
    printArray(arr2);
    vector<int> ans = arrayIntersection_BruteForce(arr1, arr2);
    printArray(ans);
    return 0;
}