#include <bits/stdc++.h>
using namespace std;
void printArray(vector<int> arr)
{
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
}
void mergeTwoSortedArrayInplace(vector<int> &arr1, vector<int> &arr2)
{

    int n = arr1.size();
    int m = arr2.size();
    int left = n - 1; // for second array
    int right = 0;    // for first array

    while (left >= 0 && right < m)
    {
        if (arr1[left] > arr2[right])
        {
            // this is not at right place , swap them
            swap(arr1[left], arr2[right]);
        }
        left--;
        right++;
    }

    // step2 : sort both the arrays
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    return;
}
double findMedianValue(vector<int> arr)
{
    double ans = 0.0;
    int noOfElements = arr.size();
    if (noOfElements % 2 == 0)
    {
        // even list of elements (two median exists : take the average of both values )
        int index1 = (noOfElements / 2);
        int index2 = index1 - 1;
        double value1 = 0, value2 = 0;
        value1 = (double)arr[index1];
        value2 = (double)arr[index2];
        ans = (value1 + value2) / 2;
    }
    else
    {
        // odd list of elements
        int index = ((noOfElements) / 2);

        ans = (double)arr[index];
    }
    return ans;
}
double medianOfTwoSortedArray(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    if (n == 0)
    {
        // means no elements in first array
        return findMedianValue(arr2);
    }

    if (m == 0)
    {
        // means no element exists in second array
        return findMedianValue(arr1);
    }

    mergeTwoSortedArrayInplace(arr1, arr2);

    double ans = -1;

    int noOfElements = (n + m);

    if (noOfElements % 2 == 0)
    {

        // even list of elements (two median exists : take the average of both values )
        int index1 = (noOfElements / 2);
        int index2 = index1 - 1;
        double value1 = 0, value2 = 0;
        if (index1 < n)
        {
            value1 = (double)arr1[index1];
        }
        else
        {
            value1 = (double)arr2[index1 - n];
        }

        if (index2 < n)
        {
            value2 = (double)arr1[index2];
        }
        else
        {
            value2 = (double)arr2[index2 - n];
        }
        ans = (value1 + value2) / 2;
    }
    else
    {

        // odd list of elements
        int index = (noOfElements / 2);
        if (index < n)
        {
            // answer will lie in first array
            ans = arr1[index];
        }
        else
        {
            ans = arr2[index - n];
        }
    }
    return ans;
}
int main()
{
    vector<int> arr1 = {3, 5, 6, 12, 15};
    vector<int> arr2 = {3, 4, 6, 10, 10, 12};
    cout << medianOfTwoSortedArray(arr1, arr2) << endl;

    return 0;
}
// try solving using two pointer approach and than median of array logic
/*
https://www.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/1
*/