#include <bits/stdc++.h>
#include "../../0commonFunctions/printComplexity.h"
using namespace std ; 
// given a string and we need to find the first non-repeating character for every index in the string 

string firstNonRepeatingCharForEveryIndex(string s ){

    string ans ; 
    int n = s.size(); 
    // concept : "queue + hashmap -> freq based problem"
    // time : O(n*k) , space:"O(1)"
    printComplexities("O(n*k)", "O(n)");
    vector<int> freq(26,0);
    queue<char>q ;

    for(int i=0 ;i<n ;i++ ){
        // step 1: update the frequency and push into queue
        freq[s[i]-'a']++;
        q.push(s[i]);


        while (!q.empty()){
            char frontChar = q.front(); 

            if(freq[frontChar -'a'] >=2){
                // non repeating 
                q.pop();
            }
            else{
                // else you got the answer 
                break;
            }
        }
        if(q.empty()){
            // this means no first non -repeating character exits 
            ans.push_back('#');
        }
        else{
            ans.push_back(q.front());
        }
    }
    return ans;
}

int main (){
    string s = "india";
    cout<<"string is "<<s<<endl;
    cout<<"non-repeating character for every index is :  -> "<<firstNonRepeatingCharForEveryIndex(s)<<endl;
    cout<<"First Non Repeating character  in stream for every index "<<endl;
    return 0 ;
}