// Given a integer and we have find the corresponding roman value of it
#include <bits/stdc++.h>
#include "../../0commonFunctions/printComplexity.h"
using namespace std;

/*
HINT :
I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
 */
void findAns(int n, string &s)
{

    // time : O(n logn )

    priority_queue<pair<int, char>> pq;
    pq.push(make_pair(1, 'I'));
    pq.push(make_pair(5, 'V'));
    pq.push(make_pair(10, 'X'));
    pq.push(make_pair(50, 'L'));
    pq.push(make_pair(100, 'C'));
    pq.push(make_pair(500, 'D'));
    pq.push(make_pair(1000, 'M'));
    string temp = "";
    if (n == 4)
    {
        temp = "IV";
    }
    else if (n == 9)
    {
        temp = "IX";
    }

    else if (n == 40)
    {
        temp = "XL";
    }
    else if (n == 90)
    {
        temp = "XC";
    }
    else if (n == 400)
    {
        temp = "CD";
    }
    else if (n == 900)
    {
        temp = "CM";
    }
    else
    {
        // find the mapped value

        while (!pq.empty() && n > 0)
        {
            pair<int, char> topValue = pq.top();
            char ch = topValue.second;
            int value = topValue.first;
            pq.pop();

            if (n >= value)
            {
                int k = (n / value);
                while (k--)
                {
                    temp.push_back(ch);
                }
                n = (n % value);
            }
        }
    }

    reverse(temp.begin(), temp.end());
    s += temp;
    // cout << s << endl;

    return;
}
string intToRomanConversion_Approach_Brute(int num)
{

    int count = 0;
    int ans = 0;
    string s = "";

    while (num)
    {
        int ld = (num % 10);
        if (count != 0)
        {
            int value = pow(10, count) * ld;
            findAns(value, s);
        }
        else
        {
            // count ==0 ;
            findAns(ld, s);
        }
        count++;

        num = num / 10;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    int n = 12345;
    cout << "number = " << n << ", " << intToRomanConversion_Approach_Brute(n) << endl;

    return 0;
}