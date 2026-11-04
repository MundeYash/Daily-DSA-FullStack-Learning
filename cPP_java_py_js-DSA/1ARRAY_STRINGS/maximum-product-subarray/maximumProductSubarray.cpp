#include<bits/stdc++.h>
using namespace std ; 
    /*Given an array of integers and we need to find the maximum product exists of all possible subarray */

// Approach1: Brute Forece : Explore al possible subarrays -> Time : o(n*2) , Space : O(1)
int maxProductSubarray(vector<int>arr ){
    int maxi = INT_MIN ; 
    
    int n = arr.size(); 
    int prod =1;
    
    for(int i=0;i<n;i++){
        
         prod =1 ;
        for(int j=i ;j<n ;j++ ){
            prod *= arr[j];
            maxi = max(maxi,prod);
            // cout<<"prod = "<<prod<<"| " ;
            
        }
    }
    

    return maxi ;
}
// Approach 2: Better Approach : Prefix Product + suffix Product + reset product of when encountered 0 :O(n) , space :O(n)

int maxProductSubarray2(vector<int>arr){
    // store in prefixProd and suffix Product array  and reset 
    int ans =INT_MIN; 
    int n = arr.size(); 
    
    vector<int>prefixProd ; 
    
    int prod =1  ;
    for(int i=0;i<n ;i++){
        prod *= arr[i]; 
        prefixProd.push_back(prod);
        if(prod ==0 ){
            // when become negative need of use reset it 
            prod =1 ;
        }
        
    }
    // compute suffix product 
    prod =1 ;
    vector<int> suffixProd(n,0); 
    for(int i=n-1;i>=0;i--){
        prod *= arr[i]; 
        suffixProd[i] = prod; 
        
        if(prod==0 )prod =1 ;
        
    }
    
    // compute maximum for previous subarray , current value and and next subarray 
    for(int i=0;i<n;i++){
        ans = max(ans,arr[i]); 
        ans = max(ans,prefixProd[i]); 
        ans = max(ans,suffixProd[i]);
    }
    return ans;
    
}
// Approach 3: Optimised Approach : Use two variable PrefixProd, suffix Product and maintain maximum while computing  -> O(n), space :O(1)

int maxProductSubarray3(vector<int>arr){
    
    int prefixProd =1 ; 
    int suffixProd =1 ;
    int ans =INT_MIN;
    int n = arr.size();
    
    for(int i=0;i<n;i++){
        ans  = max(ans,arr[i]);
        prefixProd *=arr[i]; 
        if(prefixProd==0 )prefixProd=1 ;
        ans = max(ans,prefixProd);
        suffixProd*=arr[n-i-1];
        if(suffixProd == 0 )suffixProd=1 ;
        ans = max(ans,suffixProd);
        
    }
    return ans;
    
}
int main (){
    vector<int>arr = {4,2,-3,4};
    cout<<"Implement maximum product subarary "<<endl;
    cout<<endl<<endl<<maxProductSubarray3(arr)<<endl;
    return 0 ;
}