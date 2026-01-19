#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, string> mp;
    mp[1] = "Apple";
    mp[2] = "Banana";
    mp[3] = "Cherry";
    cout<<"Size of map: "<<mp.size()<<endl; // Size of map
    cout<<"Elements in the map: "<<endl;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<" -> "<<it->second<<endl;
    }
    cout<<"Value associated with key 2: "<<mp[2]<<endl; // Accessing value by key
    mp.erase(2); // Erases the key-value pair with key 2
    cout<<"Size of map after erasing key 2: "<<mp.size()<<endl; // Size after erase
    cout<<"Elements in the map after erasing key 2: "<<endl;    
    for(auto it:mp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
    auto it=mp.find(3); // Finds the key 3
    if(it != mp.end()){
        cout<<"Key 3 is found with value: "<<it->second<<endl;
    } else {
        cout<<"Key 3 is not found in the map."<<endl;
    }
    return 0;
}
// Map is an ordered collection of key-value pairs with unique keys.
// Common operations: insert(), erase(), find(), size(), empty(), begin(), end()
// Example usage of map in C++ STL
// This code demonstrates basic map operations like insert, erase, find, and iteration
// It shows how to create a map, add key-value pairs to it, remove pairs, check for presence of keys, and iterate through the map.
// The map is implemented using the C++ Standard Template Library (STL).
// Output:
// Size of map: 3   
// Elements in the map:
// 1 -> Apple
// 2 -> Banana
// 3 -> Cherry
// Value associated with key 2: Banana
// Size of map after erasing key 2: 2
// Elements in the map after erasing key 2:
// 1 -> Apple
// 3 -> Cherry
// Key 3 is found with value: Cherry
// Note: Maps automatically sort the keys in ascending order and do not allow duplicate keys.
// Maps are widely used in various applications like implementing dictionaries, counting frequencies of elements with unique keys, and maintaining associations between data.
// Make sure to include the <map> header if not using bits/stdc++.h
