#include<bits/stdc++.h>
using namespace std;
int main(){
    multimap<int, string> mmp;
    mmp.insert({1, "Apple"});
    mmp.insert({2, "Banana"});
    mmp.insert({2, "Blueberry"}); // Duplicate key
    mmp.insert({3, "Cherry"});
    cout<<"Size of multimap: "<<mmp.size()<<endl; // Size of multimap
    cout<<"Elements in the multimap: "<<endl;
    for(auto it=mmp.begin(); it!=mmp.end(); it++){
        cout<<it->first<<" -> "<<it->second<<endl;
    }
    cout<<"Values associated with key 2: ";
    auto range = mmp.equal_range(2);
    for(auto it=range.first; it!=range.second; it++){
        cout<<it->second<<" ";
    }
    cout<<endl;
    mmp.erase(2); // Erases all key-value pairs with key 2
    cout<<"Size of multimap after erasing key 2: "<<mmp.size()<<endl; // Size after erase
    cout<<"Elements in the multimap after erasing key 2: "<<endl;    
    for(auto it:mmp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
    auto it=mmp.find(3); // Finds the key 3
    if(it != mmp.end()){
        cout<<"Key 3 is found with value: "<<it->second<<endl;
    } else {
        cout<<"Key 3 is not found in the multimap."<<endl;
    }
    return 0;
}
// Multimap is an ordered collection of key-value pairs that allows duplicate keys.
// Common operations: insert(), erase(), find(), equal_range(), size(), empty(), begin(),
// end()
// Example usage of multimap in C++ STL 
// This code demonstrates basic multimap operations like insert, erase, find, equal_range, and iteration
// It shows how to create a multimap, add key-value pairs to it (including duplicates), remove pairs, check for presence of keys, and iterate through the multimap.
// The multimap is implemented using the C++ Standard Template Library (STL).
// Output:
// Size of multimap: 4
// Elements in the multimap:
// 1 -> Apple
// 2 -> Banana
// 2 -> Blueberry
// 3 -> Cherry
// Values associated with key 2: Banana Blueberry
// Size of multimap after erasing key 2: 2
// Elements in the multimap after erasing key 2:
// 1 -> Apple
// 3 -> Cherry
// Key 3 is found with value: Cherry
// Note: Multimaps automatically sort the keys in ascending order and allow duplicate keys.
// Multimaps are widely used in various applications like maintaining a collection with duplicate keys, implementing algorithms that require sorted data with duplicates, and grouping data based on keys.
// Make sure to include the <map> header if not using bits/stdc++.h
