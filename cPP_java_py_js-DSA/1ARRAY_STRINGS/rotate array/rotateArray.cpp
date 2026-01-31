/*
ROTATE ARRAY : Given an array of integers and we need to find rotate the array element in-place by k step either in clockwise or anticlockwise direction

*/

#include <bits/stdc++.h>
#include "../../commonFunctions/printComplexity.h"
using namespace std;

/*---------------------Optimsised Approach-------------------------------------------------------------------*/
vector<int> rotateArrayK_Approach2_Optimised(vector<int> arr, int k)
{
    // concept : reverse , inplace
    // time :O(n log n ), space -O(1)
    printComplexities("O(nlog n)", "O(1)");

    // step1: reverse first k element
    reverse(arr.begin(), arr.begin() + k);

    // step2: reverse next (n-k ) elements
    reverse(arr.begin() + k + 1, arr.end());

    // step3: reverse entire array
    reverse(arr.begin(), arr.end());
    return arr;
}

/*---------------------Better Approach-------------------------------------------------------------------*/
vector<int> rotateArrayK_Approach_Better(vector<int> arr)
{
    // concept : Use extra array , (index) position arrangement of elements , modulo operator
    // time : O(n), space :O(n)
    // pending to solve
}

/*---------------------BruteForce Approach-------------------------------------------------------------------*/
vector<int> rotateArrayK_Approach_Brute(vector<int> arr)
{
    // concept : Stack based solution
    // time : O(n), space :O(n)
    // pending to solve
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    printArray(arr);
    cout << "K=" << k << endl;
    vector<int> ans = rotateArrayK_Approach2_Optimised(arr, k);
    printArray(ans);

    return 0;
}

/*
https://www.youtube.com/watch?v=wvcQg43_V8U
*/