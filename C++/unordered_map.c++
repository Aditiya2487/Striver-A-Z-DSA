#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int, string> ump;
    ump[1] = "Apple";
    ump[2] = "Banana";
    ump[3] = "Cherry";
    cout<<"Size of unordered_map: "<<ump.size()<<endl; // Size of unordered_map
    cout<<"Elements in the unordered_map: "<<endl;
    for(auto it=ump.begin(); it!=ump.end(); it++){
        cout<<it->first<<" -> "<<it->second<<endl;
    }   
    cout<<"Value associated with key 2: "<<ump[2]<<endl; // Accessing value by key
    ump.erase(2); // Erases the key-value pair with key 2
    cout<<"Size of unordered_map after erasing key 2: "<<ump.size()<<endl; // Size after erase
    cout<<"Elements in the unordered_map after erasing key 2: "<<endl;
    for(auto it:ump){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
    auto it=ump.find(3); // Finds the key 3
    if(it != ump.end()){
        cout<<"Key 3 is found with value: "<<it->second<<endl;
    } else {
        cout<<"Key 3 is not found in the unordered_map."<<endl;
    }
    return 0;
}
// Unordered_map is an unordered collection of key-value pairs with unique keys.
// Common operations: insert(), erase(), find(), size(), empty(), begin(), end()
// Example usage of unordered_map in C++ STL
// This code demonstrates basic unordered_map operations like insert, erase, find, and iteration
// It shows how to create an unordered_map, add key-value pairs to it, remove pairs, check for presence of keys, and iterate through the unordered_map.
// The unordered_map is implemented using the C++ Standard Template Library (STL).
// Output:
// Size of unordered_map: 3 
// Elements in the unordered_map:
// 1 -> Apple
// 2 -> Banana
// 3 -> Cherry  
// Value associated with key 2: Banana
// Size of unordered_map after erasing key 2: 2
// Elements in the unordered_map after erasing key 2:
// 1 -> Apple
// 3 -> Cherry
// Key 3 is found with value: Cherry
// Note: Unordered_maps do not maintain any specific order of keys and provide average O(1) time complexity for search, insert, and delete operations.
// Unordered_maps are widely used in various applications like implementing hash tables, counting frequencies of elements with unique keys, and maintaining associations between data.
// Make sure to include the <unordered_map> header if not using bits/stdc++.h
