#include <bits/stdc++.h>
#include "../../0commonFunctions/printComplexity.h"
using namespace std;
// ginve an array which contains number from (1 to N)  and we have find the missing number from series

int missingNumber_Approach_Optimised(vector<int> arr)
{

    // concept : array sum and Series sum
    // time : O(n) , space :O(1)

    printComplexities("O(n)", "O(1)");

    int n = arr.size();
    int sumOfSeries = (n * (n + 1)) / 2;
    int sumOfArray = 0;

    for (auto val : arr)
    {
        sumOfArray += val;
    }
    return (sumOfSeries - sumOfArray);
}

int main()
{

    vector<int> arr = {9, 6, 4, 2, 8, 3, 5, 7, 0, 1};
    printArray(arr);
    cout << "missing elements " << missingNumber_Approach_Optimised(arr) << endl;
    return 0;
}