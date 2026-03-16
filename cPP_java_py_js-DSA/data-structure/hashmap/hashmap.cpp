#include<bits/stdc++.h>
using namespace std; 

void printHashMap(unordered_map<int ,int>mp ){
    for(auto it: mp ){
        cout<<"Key=" <<it.first<<",Value ="<<it.second<<"\n";
    }
    cout<<endl;
}
int main (){
     unordered_map<int,int>mp ; 


    // Operation in hashmap


    // 1.insert operation : mp[value] or insert method
    mp[0] =1 ;// key value insertion
    mp.insert({1,10});// using insert function 
    printHashMap(mp);


    // 2.acces value : mp[value] 
    cout<<mp[0]<<endl;// direct access

   

    //3. find method : give iterator 
     mp.find(3);
    printHashMap(mp);

    // 4. check if key exists 
    if(mp.find(3)!=mp.end()){
        cout<<"key exists ";
    }
    else{
        cout<<"Not exists ";
    }

    //5. erase method (iterator of key is passed)
    auto it= mp.find(0);
    mp.erase(it);
    printHashMap(mp);

    // 6. size method : to get the no of pairs exists in hashmap
    cout<<mp.size()<<endl; 

    // 7. clear method : to delete all the key value pairs from hashmap
    mp.clear(); 
    printHashMap(mp);

    // 8. iterating over hashmap: for (auto )loop

    for(auto it: mp ){
        cout<<"k->"<<it.first<<", value"<<it.second<<endl;
    }


    cout<<"how to use hash map and its operations"<<endl;
    return 0 ;

}