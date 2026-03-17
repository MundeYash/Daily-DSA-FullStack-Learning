// Kadane algorithm : maximum sum subarray - cPP code is remaining
#include<bits/stdc++.h>
#include "../../0commonFunctions/printComplexity.h"
using namespace std; 

// Kadane Algorithm : maximum sum subarray : find the maximum possible sum of all possible subarrays 

int maximumSubarraySum_Brute(vector<int>arr ){

    // concept : explore all possile subarray and maintain the maximum sum 
    // time : O(n^2)
    // space : O(n)
    printComplexities("O(n^2)","O(1)");
    int n = arr.size(); 
    int maxSum = INT_MIN;

    for(int i=0;i<n ;i++ ){
        int sum =0 ; 
        for(int j=i;j<n ;j++ ){
            sum += arr[j]; 
            if(sum>maxSum)maxSum  = sum ;

        }
    }
    return maxSum;

}

int maximumSubarraySum_Optimised(vector<int>arr ){
    // concept : negative sum 
    // time : O(N), space : O(1) 
    printComplexities("O(n)","O(1)");

    int maxSum =0 ; 
    int n = arr.size(); 
    int sum =0 ;

    for(int i=0 ;i<n ;i++ ){
        sum += arr[i]; // adding current element 
        // Step2 : first update the current sum and maximum sum

        if(sum>maxSum){
            maxSum = sum;
        }

        //Step3 : if sum becomes negative -> reset it to 0
        if(sum<0){
            // negative sum 
            sum =0 ;
        }
    }
    return maxSum ;
}
int main ()
{
    
    cout<<"\nKadane algorithm implementation"<<endl;
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    int n = arr.size();
    printArray(arr);
    int ans1 =  maximumSubarraySum_Brute(arr); 
    cout<<"maximum subarray sum is : "<<ans1<<endl;
    
    int ans2 =  maximumSubarraySum_Optimised(arr); 
    cout<<"maximum subarray sum is : "<<ans2<<endl;

    return 0 ;
}