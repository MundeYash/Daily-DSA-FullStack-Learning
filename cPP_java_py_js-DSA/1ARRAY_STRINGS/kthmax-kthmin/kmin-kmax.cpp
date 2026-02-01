#include<bits/stdc++.h>
using namespace std  ; 
// find the kth samllest and kth largest element without sorting and duplicate values are not allowed or considered
int kthMinimum(vector<int> arr, int k ){
    int n = arr.size();
    int ans =-1;
    priority_queue<int > pq ; 
    
    // step 1: push first k elements 
    for (int i=0 ;i<k ;i++ ){
        pq.push(arr[i]);
    }
    
    for (int i=k ;i<n ;i++){
        if (!pq.empty() && arr[i]<pq.top()){ // we are interested in minimum value 
            pq.pop();
            pq.push(arr[i]);
        }
        
    }
    if (!pq.empty()){
        ans = pq.top();
    }
    return ans;
}
int kthMaximum(vector<int> arr, int k ){
    // concept : heap-based-approach
    // time Complexity :O(n),Space:O(n)
    int n = arr.size();
    int ans =-1;
    priority_queue<int, vector<int>, greater<int> > pq ; 
    
    // step 1: push first k elements 
    for (int i=0 ;i<k ;i++ ){
        pq.push(arr[i]);
    }
    
    for (int i=k ;i<n ;i++){
        if (!pq.empty() && arr[i]>pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
        
    }
    if (!pq.empty()){
        ans = pq.top();
    }
    return ans;
}
pair<int,int>findKthMinimum_MaximumElement_Heap(vector<int>arr , int k ){
    pair<int,int>ans;
    // concept: Priority Queue /Heap , Time :O(n), space : O(1)
    ans.second = kthMaximum(arr,k);
    ans.first = kthMinimum(arr,k);
    
    return ans;
}
pair<int,int>findKthMinimum_MaximumElement_Sorting(vector<int>arr , int k ){
    // valid for unique values 
    int n = arr.size();
    
    // Sorting , Time : O(n log n ) , space : O(1)
    pair<int,int>ans;
    
        // check case 
        if (k>n) return ans;
    
    sort(arr.begin(), arr.end());
    ans.first = arr[k-1]; //kth minimum
    ans.second = arr[n-k];// kth maximum 
    
    
    return ans;
}

void printArray(vector<int>arr){
    int n = arr.size() ; 
    for (int i= 0;i<n ;i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void printKthMinimumMaximumValues(pair<int , int> ans){
    
    cout<<"kth minimum-maximum: "<<ans.first<<","<<ans.second<<endl;
    return ;
}
int main (){
    cout<<"bhai everything is fine you can code\n";
    
    vector<int>arr = {1,2,3,4,5};
    printArray(arr);
    int k =2;
    
    pair<int,int> ans =findKthMinimum_MaximumElement_Sorting(arr,k);
    printKthMinimumMaximumValues(ans);
    
    pair<int,int> ans2 =findKthMinimum_MaximumElement_Heap(arr,k);
    printKthMinimumMaximumValues(ans2);
    
    
    return 0 ;
}