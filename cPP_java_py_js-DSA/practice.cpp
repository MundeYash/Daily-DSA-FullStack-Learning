#include <bits/stdc++.h>
using namespace std;
// function to find the factorial of a number
int factorial(int n)
{
    // base case
    if (n <= 1)
    {
        return 1;
    }
    // recursive case
    return n * factorial(n - 1);
}

// function to print fibonacci series
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
void fiboPrint(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }
}
// function for reverse a string
string reverseString(string str)
{
    int n = str.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(str[i], str[j]);
        i++;
        j--;
    }
    return str;
}
// function for vowel , consonent count
void countVowelConsonent(string str)
{
    int vowel = 0, consonent = 0, whiteSpace = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel++;
        }
        else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        else if (str[i] == ' ')
            continue;
        else
        {
            consonent++;
        }
    }
    cout << "length of string is " << str.size() << endl;
    cout << "Vowel : " << vowel << " Consonent : " << consonent << " WhiteSpace : " << whiteSpace << endl;
}
// passing in function
pair<int, int> minMax(int arr[], int n)
{
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int value = arr[i];
        maxi = max(value, maxi);
        mini = min(value, mini);
    }
    return {maxi, mini};
}
// Non returing fuction with no paratemer
void greet()
{
    cout << "Good Morning Mitron" << endl;
}

// Returning Function with paramters
int add(int a, int b)
{
    return (a + b);
}
int main()
{
    cout << "Practicing the basic concepts of c++";
    cout << endl;

    // printing or output
    cout << "Learning basics in c++ \n";

    // variable declaration
    int a;
    string b;
    float c;
    double d;
    char e;
    bool f;
    cout << a << b << c << d << e << f;

    /*User input */
    cout << "\nEnter values ";
    // cin >> a >> b >> c >> d >> e >> f;
    cout << "After user input:\n"
         << a << b << c << d << e << f;

    /*   Function declaration , types , intialization and passing parameters , function calling  */
    cout << endl;
    // function call
    greet();
    cout << add(10, 20);

    // IF -ELSE BLOCKS AND STATEMENT
    if (a >= 18)
    {
        cout << "\n You are an adult ";
    }
    else
    {
        cout << "\nYou are a Minor ";
    }

    /*LOOPS CONCEPT */

    // For loop

    cout << "Table of 2 :->";
    for (int i = 1; i <= 10; i++)
    {
        cout << (2 * i) << " ";
    }

    // while loop
    int i = 2;
    cout << "\n even number printing ";
    while (i <= 10)
    { // even number printing
        cout << i << " ";
        i += 2;
    }

    // do while loop
    do
    {
        // minimum one time execution always occur
        cout << "\nexecuted";

    } while (false);

    /* ARRAYS CONCEPT */

    // Array declaration
    int arr[5];
    int arr1[] = {2, 4, 5, 8}; // Arrays can be accessed via the indexed

    int n = sizeof(arr1) / sizeof(int);
    cout << "\nSize of array is : " << n << endl;

    pair<int, int> ans = minMax(arr1, n);
    cout << ans.first << "," << ans.second << endl;

    /* STRING CONCEPT */
    string str = "Yash Munde";
    cout << str << endl;
    // size finding
    int N = str.size();
    N = str.length(); // both are valid for finding the string length
    cout << N << endl;

    // string passing as arguments
    countVowelConsonent(str);
    cout << reverseString(str) << endl;

    /* CONCEPT OF RECURSION */
    cout << "Factorial of 5 is : " << factorial(5) << endl;

    // fibonacci series printing
    fiboPrint(5);

    return 0;
}
