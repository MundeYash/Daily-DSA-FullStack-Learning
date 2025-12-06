#include<iostream>
#include<vector>
using namespace std  ; 
void printArray(vector<int>arr);
void reverseArray(vector<int>&arr ){
    cout<<"Reverse Array is getting executed \n";
    
    int n = arr.size();
    
    // Two pointer approach : Time ~O(n)  , space :O(1)
    cout<<"BEFORE  :";
    printArray(arr);
    int start =0 , end = n-1;
    while (start<end){
        swap(arr[start],arr[end]);
        start++ ; 
        end--;
        
    }
    cout<<"AFTER:  ";
    printArray(arr);
    return ;
}

void printArray(vector<int>arr){
    int n = arr.size() ; 
    for (int i= 0;i<n ;i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main (){
    cout<<"this is working\n";
    
    vector<int>arr = {1,2,3,4,5};
    printArray(arr);
    reverseArray(arr);
    
    cout<<"\n\n";
    return 0 ;
}