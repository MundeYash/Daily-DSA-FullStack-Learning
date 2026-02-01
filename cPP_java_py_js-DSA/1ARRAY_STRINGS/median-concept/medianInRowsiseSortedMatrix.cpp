

#include <bits/stdc++.h>
using namespace std;
/*Optimised Approach based on binary search is pending  */
/*---------------------------------------------------------------------------*/
int medianInRowiseSortedMatrix_Approach1_Brute(vector<vector<int>> &mat)
{
    // brute force : store element , sort and apply median concept
    // time : O(n*m), space : O(n*m)

    // no of elements will be always odd
    int n = mat.size();
    int m = mat[0].size();
    int noOfElements = (n * m);

    // step 1 : store all elements in array
    vector<int> temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            temp.push_back(mat[i][j]);
        }
    }
    // step2 : sort the array elements
    sort(temp.begin(), temp.end());

    // Step3 : find median
    return temp[(noOfElements + 1) / 2 - 1]; // -1 due to index
}

/*---------------------------------------------------------------------------*/
int main()
{
    vector<vector<int>> mat = {{1, 3, 5}, {2, 6, 9}, {3, 6, 9}};
    int ans = medianInRowiseSortedMatrix_Approach1_Brute(mat);
    cout << "median is " << ans << endl;

    return 0;
}
/*
https://www.youtube.com/watch?v=Q9wXgdxJq48

https://www.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1
*/