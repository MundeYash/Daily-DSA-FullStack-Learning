#include<bits/stdc++.h>
#include<set>
using namespace std ; 

void printSet(unordered_set<int>s ){
    cout<<"Set value : "; 
    for(auto it: s ){
        cout<<it<<", ";
    }
    cout<<endl;

}
int main(){

    // set creation 
    unordered_set<int>s;


    // 1. insert Operation : for adding vauees in set
    s.insert(2);
    s.insert(4);
    s.insert(6);
    s.insert(8);
    printSet(s);

    // 2. erase operation : for remove values from set via value
    s.erase(4);
    printSet(s);

    // find method : to find particular value in a set :-> it will give a iterator
    (s.find(2)); 
    printSet(s);

    //4.check if an element exists in set or not 
    int element =2; 
    if(s.find(element)!= s.end()){
        cout<<element<<"Exists in array "<<endl;
    }

    // 5. size method : to get the no of elements present in set 
    cout<<s.size()<<endl;

    // 6. clear method : to delete all the elements of set 
    // s.clear(); 
    printSet(s);

    //7 Ierating over set for(auto val) loop: to get the each value of set and perfom some operation
    for(auto it: s ){
        cout<<it<<" ";
    }
    cout<<endl;

    //8. count method : to find number of elements in set 
    cout<<s.count(6);

   

    cout<<"\nConcept of Set and its available operations \n";
    return 0;
}