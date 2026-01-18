#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> ms;
    ms.insert(10);  
    ms.insert(20);
    ms.insert(20); // Duplicate element
    ms.insert(30);
    cout<<"Size of multiset: "<<ms.size()<<endl; // Size of multiset
    cout<<"Elements in the multiset: ";
    for(auto it=ms.begin(); it!=ms.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"Count of 20 in multiset: "<<ms.count(20)<<endl; // Count of 20
    ms.erase(20); // Erases all occurrences of 20
    cout<<"Size of multiset after erasing 20: "<<ms.size()<<endl; // Size after erase
    cout<<"Elements in the multiset after erasing 20: ";    
    for(auto it:ms){
        cout<<it<<" ";
    }
    cout<<endl;
    ms.insert(20);
    ms.insert(20);
    auto it=ms.find(20); // Finds an occurrence of 20
    if(it != ms.end()){
        cout<<"20 is found in the multiset."<<endl;
    } else {
        cout<<"20 is not found in the multiset."<<endl;
    }
    ms.erase(it); // Erases only one occurrence of 20
    cout<<"Elements in the multiset after erasing one occurrence of 20: ";
    for(auto it:ms){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
// Multiset is an ordered collection that allows duplicate elements.
// Common operations: insert(), erase(), find(), count(), size(), empty(), begin(), end()
// Example usage of multiset in C++ STL
// This code demonstrates basic multiset operations like insert, erase, find, count, and iteration
// It shows how to create a multiset, add elements to it (including duplicates), remove elements, check for presence of elements, and iterate through the multiset.
// The multiset is implemented using the C++ Standard Template Library (STL).
// Output:
// Size of multiset: 4
// Elements in the multiset: 10 20 20 30
// Count of 20 in multiset: 2
// Size of multiset after erasing 20: 2
// Elements in the multiset after erasing 20: 10 30
// 20 is found in the multiset.
// Elements in the multiset after erasing one occurrence of 20: 10 30 20
// Note: Multisets automatically sort the elements in ascending order and allow duplicate values.
// Multisets are widely used in various applications like counting frequencies of elements, maintaining a collection with duplicates, and implementing algorithms that require sorted data with duplicates.
// Make sure to include the <set> header if not using bits/stdc++.h
