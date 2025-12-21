#include<bits/stdc++.h>
using namespace std ; 

// TYPE 1 : Order does not matter
void moveNegativeElementsToEnd_type1(vector<int>&arr , int n ){

}

// Type 2 : Maintaining the order of elements
void moveNegativeElementsToEnd_type2(vector<int>&arr , int  n ){

}
void printArray(vector<int>arr , int n ){
    for (int i=0;i<n ;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}
int main(){
    cout<<"Question : Moving all the negative elements given in array to end to array "<<endl;
    vector<int>arr = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    printArray(arr, arr.size());

    cout<<endl;

    return 0;
}