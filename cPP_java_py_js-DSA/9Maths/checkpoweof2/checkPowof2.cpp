#include <bits/stdc++.h>
#include "../../0commonFunctions/printComplexity.h"
using namespace std;

/*
    Given a number and we need check whether it is power of 2 or not.
*/

int checkPowerofTwo_Approach_Brute(int n)
{
    printComplexities("O(31 * N)", "O(1)");
    // integer range vary from (-2^31 <= n <= 2^31 - 1)
    // concept : power function
    // time : O(31 * n) , space :O(1)
    for (int i = 0; i <= 31; i++)
    {
        // step 1: check from power of two from 1 to 31 (answer may ly in this range )
        if (pow(2, i) == n)
            return true;
    }
    return false;
}
int checkPowerOfTwo_Approach_Optimised(int n)
{

    printComplexities("O(n)", "O(1)");
    // concept : bits + check 0 bit
    // hint : power of two number will only contain 1 at the start

    if (n == 0)
        return false; // edge case
    int ld;
    while (n)
    {
        ld = (n & 1);
        if (ld == 1)
            break;

        n = n >> 1;
    }
    // update the number and check
    n = n >> 1;
    if (n != 0)
        return false;
    return true;
}
int main()
{
    cout << checkPowerOfTwo_Approach_Optimised(2) << endl;
    cout << checkPowerofTwo_Approach_Brute(2) << endl;
    cout << checkPowerOfTwo_Approach_Optimised(8) << endl;
    cout << checkPowerofTwo_Approach_Brute(8) << endl;
    cout << "Check whether given number is pow of 2 or not " << endl;
    return 0;
}