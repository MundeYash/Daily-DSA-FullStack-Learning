#include <bits/stdc++.h>
#include "../../commonFunctions/printComplexity.h"
using namespace std;
/*NEXT-GREATER-ELEMENT - Given an array of integers and we need to find next greater element (element which is just greater than current value on right side of the array ) for each element of the array  */

// helper function for finding greater element on right
int findNextGreaterElementOnRight(vector<int> arr, int index)
{
    for (int i = index + 1; i < arr.size(); i++)
    {
        if (arr[i] > arr[index])
        {
            return arr[i];
        }
    }
    return -1;
}
vector<int> nextGreaterElement_Approach1_Brute(vector<int> arr)
{

    // concept: Brute force-explore every possible ans
    // time :O(n*k) , space :O(n)
    printComplexities("O(n*k)", "O(n)");
    int n = arr.size();
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        ans.push_back(findNextGreaterElementOnRight(arr, i));
    }

    return ans;
}

int main()
{

    vector<int> arr = {6, 8, 0, 1, 3};
    printArray(arr);
    vector<int>ans1 = nextGreaterElement_Approach1_Brute(arr); 
    printArray(ans1);
    return 0;
}