#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> arr ){
    int ans =arr[0]; 

    int smallestNumber =INT_MAX ; 
    int secondSmallestNumber = INT_MAX ; 


    int n = arr.size();

    for (int i=0 ;i<n ;i++ ){
        int value = arr[i]; 
        if (value<smallestNumber){

            // transfer the value of smallest into second smallest
            secondSmallestNumber = smallestNumber ;
            smallestNumber = value;

        }
        else{
            if (value<secondSmallestNumber &&  value != smallestNumber){
                secondSmallestNumber = value ; 
            }
        }
    }



    ans = secondSmallestNumber ; 

    return ans;
}

void printArray(vector<int>arr ){
    int n = arr.size(); 

    for (int i=0 ;i<n ;i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    printArray(arr);
    sort(arr.begin(),arr.end());
    printArray(arr);
    cout << "second Largest element is "<< secondLargest(arr) << endl;
    return 0;
}