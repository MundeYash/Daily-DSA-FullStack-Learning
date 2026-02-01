#include <bits/stdc++.h>
using namespace std;


// function for finding the maximum of window of each of size k 
vector<int> slidingWindowMaximumApproach1(vector<int> arr , int k ){
    
    cout<<"Sliding window approach"<<"\nBRUTE FORCE  APPROACH - (Expolring All Windows & find maximum)\n";
    vector<int> ans;
    int n  = arr.size();
    
    // Step1 : explore all windows
    for (int i=0 ;i<=n-k;i++){
        
        // step2: find the maximum of all windows and store it 
        int maxi= arr[i]; 
        for (int j=i ;j<=(i+k-1);j++){
            maxi = max(maxi,arr[j]);
        }
        ans.push_back(maxi);
    }
    return ans;
    
    
}
void printVector(vector<int> arr ){
    int n  = arr.size(); 
    for (int i=0 ;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>arr = {4, 0, -1, 3, 5, 3, 6, 8};
    int n = arr.size();
    int k =3;
    printVector(arr);
    cout << "this is implemetation of sliding window maximum problem" << endl;
    vector<int> ans = slidingWindowMaximumApproach1(arr,k);
    printVector(ans);
    cout << endl
         << endl;
    return 0;
}