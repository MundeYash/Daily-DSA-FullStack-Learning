#include <bits/stdc++.h>
using namespace std;

double findMedian(vector<int> &arr)
{
    double ans = 0.0;
    // step 1 : sort thea rray elementts
    sort(arr.begin(), arr.end());

    // step 2 : find the median : odd size - single median, even size - (2 median value ,take average of it );
    int n = arr.size();
    if (n & 1)
    {
        // single median value
        int index = ((n + 1) / 2) - 1;
        ans = double(arr[index]);
    }
    else
    {
        int index = (n / 2) - 1;
        int nextIndex = index + 1;
        ans = (double(arr[index]) + double(arr[nextIndex])) / 2;
    }
    return ans;
}
int main()
{
    cout << "this is working , Median concept ";
    vector<int> arr = {5, 3, 8, 1, 4};
    double median = findMedian(arr);
    cout << "\nMedian: " << median << endl;
    return 0;
}

/*
Practice links : https://www.geeksforgeeks.org/problems/find-the-median0527/1


*/