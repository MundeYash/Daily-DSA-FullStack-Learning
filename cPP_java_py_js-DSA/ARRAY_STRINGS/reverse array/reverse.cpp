#include <iostream>
#include <vector>
#include "../../commonFunctions/printComplexity.h"
using namespace std;
void reverseArray_Approach1_Optimised(vector<int> &arr)
{
    cout << "Reverse Array is getting executed \n";

    int n = arr.size();

    // concept : Two pointer + comparison : Time ~O(n)  , space :O(1)
    printComplexities("O(N)", "O(1)");
    cout << "BEFORE  :";
    printArray(arr);
    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "AFTER:  ";
    printArray(arr);
    return;
}
int main()
{
    cout << "this is working\n";

    vector<int> arr = {1, 2, 3, 4, 5};
    printArray(arr);
    reverseArray_Approach1_Optimised(arr);

    cout << "\n\n";
    return 0;
}