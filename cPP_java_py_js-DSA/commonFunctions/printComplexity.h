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
    for (auto i : arr)
    {

        cout << i << ",";
    }
    cout << endl;
}
#endif // PRINT_COMPLEXITY_H