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
/*
    mp.set(key, value) : to set / insert some value 

    mp.get(key): to acess the value of key present in the map 

    mp.has(key): it check whether the key present in the map or not 
*/
mp[0]=1 ; 
mp[1]=10;
mp[20]=10;
printHashMap(mp);
console.log(mp[0]);

printHashMap(mp);