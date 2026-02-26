function printHashMap(mp){
    for(let [key,val] of mp ){
        console.log("key->"+key+"value->"+val );
    }
    return;
}

// map declaration
let mp = new Map();
console.log(mp);
printHashMap(mp);

//1. inserion operation : insert operation 
mp[0]=1 ; 
mp[1]=10;
mp[20]=10;
printHashMap(mp);
console.log(mp[0]);

printHashMap(mp);