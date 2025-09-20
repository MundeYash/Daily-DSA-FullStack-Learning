#include<bits/stdc++.h>
using namespace std  ; 

pair<int , int> minMaxElement(vector<int>arr ){
    pair<int , int > ans ; 
    // linear seach, Time ; O(n)  , space : O(1)
    int n = arr.size(); 
    int minValue = INT_MAX; 
    int maxValue = INT_MIN;
    for (int i=0 ; i<n ;i++ ){
        int currentValue = arr[i];
        minValue = min(currentValue , minValue); 
        maxValue = max(currentValue , maxValue);
        
    }
    ans.first = minValue ; 
    ans.second = maxValue ;
    
    return ans;
}

void printArray(vector<int>arr){
    int n = arr.size() ; 
    for (int i= 0;i<n ;i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main (){
    cout<<"bhai everything is fine you can code\n";
    
    vector<int>arr = {1,2,3,4,5};
    printArray(arr);
    pair<int,int> minMaxValue = minMaxElement(arr);
    cout<<"Minimum value "<<minMaxValue.first<<"\n";
    cout<<"Maximum value "<<minMaxValue.second<<endl;
    
    return 0 ;
}