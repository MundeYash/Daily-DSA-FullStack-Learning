#include <bits/stdc++.h>
#include "../../0commonFunctions/printComplexity.h"
using namespace std;

// Given an array of integers and we need to find the product of all element excluding current element

vector<int> productOfArrayExceptSelf_Optimised_approach(vector<int> arr)
{
    // concept : prefix sum and computation product

    printComplexities("O(n)", "O(n)");
    int n = arr.size();
    vector<int> prefixProd;
    vector<int> suffixProd(n, 0);
    // int n = arr.size();
    int preProd = 1;
    int suffProd = 1;
    for (int i = 0; i < n; i++)
    {
        preProd *= arr[i];
        prefixProd.push_back(preProd);
        suffProd *= arr[(n - i - 1)];
        suffixProd[(n - i - 1)] = suffProd;
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int value = 1;

        if (i == 0)
        {
            value = suffixProd[i + 1];
        }
        else if (i == n - 1)
        {
            value = prefixProd[(i - 1)];
        }
        else
        {
            value = (prefixProd[(i - 1)] * suffixProd[i + 1]);
        }
        ans.push_back(value);
    }
    return ans;
}
vector<int> productOfArrayExceptSelf_Brute_Force_approach(vector<int> arr)
{
    vector<int> ans;
    // concept : explore all possible ways and find product  ,not include current index
    printComplexities("O(n^2)", "O(1)");
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int prod = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                prod *= arr[j];
            }
        }
        ans.push_back(prod);
    }
    return ans;
}
int main()
{
    vector<int> arr = {-1, 1, 0, -3, 3};
    printArray(arr);
    vector<int> ans = productOfArrayExceptSelf_Brute_Force_approach(arr);
    printArray(ans);

    vector<int> ans2 = productOfArrayExceptSelf_Optimised_approach(arr);
    printArray(ans2);
    return 0;
}