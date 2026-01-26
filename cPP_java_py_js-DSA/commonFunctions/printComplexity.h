#ifndef PRINT_COMPLEXITY_H
#define PRINT_COMPLEXITY_H

#include <bits/stdc++.h>
using namespace std;

void printComplexities(string timeComplexity, string spaceComplexity)
{
    cout << "Time: " << timeComplexity;
    cout << "\nSpace: " << spaceComplexity << endl;
}

void printArray(vector<int> &arr)
{
    int n = arr.size();
    cout << "Array elements: [";
    for (int i = 0; i < n; i++)
    {

        if (i == n - 1)
        {
            cout << arr[i] << "]\n";
        }
        else
        {
            cout << arr[i] << ",";
        }
    }
    cout << endl;
}

void printStringArray(vector<string> s)
{

    cout << "[";
    for (auto i : s)
    {
        cout << i << ",";
    }
    cout << "]\n";
}

void printStringOfStringArray(vector<vector<string>> s)
{
    cout << "[";
    for (auto i : s)
    {
        cout << "[";
        for (auto j : i)
        {
            cout << j << ", ";
        }
        cout << "]\n";
    }
    cout << "]\n";
}
#endif // PRINT_COMPLEXITY_H