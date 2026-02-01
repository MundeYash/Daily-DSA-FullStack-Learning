#include<bits/stdc++.h>
using namespace std ; 

// TYPE 1 : Order does not matter
void moveNegativeElementsToEnd_type1(vector<int>&arr , int n ){
     return ;
}

// Type 2 : Maintaining the order of elements
void moveNegativeElementsToEnd_type2(vector<int>&arr , int  n ){

    return ;
}
void moveNegativeElementsToEnd_typ2_Approach_QuickSort(vector<int>&arr , int n ){
    int i = 0;
    for (int j = 0; j < n; j++) {
        cout << "ith iteration:-> " << i<<endl;
        if (arr[j] < 0) {
            cout<<"swap happended: "<<arr[i]<<","<<arr[j];

            
            // means it is a negative number 
            swap(arr[i], arr[j]);
            cout << "After :";
            printArray(arr, n);
            i++;
        }
        cout<<endl;

    }
    cout << "end\n";
    return;
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
    int n = arr.size();
    printArray(arr, n);
    moveNegativeElementsToEnd_typ2_Approach_QuickSort(arr, n ); 
    printArray(arr , n );

    cout<<endl;

    return 0;
}