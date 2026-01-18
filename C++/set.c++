#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    cout<<"Size of set: "<<s.size()<<endl; // Size of set

    cout<<"Elements in the set: ";
    for(auto it=s.begin(); it!=s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<s.count(30)<<endl; // Check if 20 is present returns 1 if present, 0 if not

    s.erase(20);
    cout<<"Size of set after erasing 20: "<<s.size()<<endl; // Size after erase

    cout<<"Elements in the set after erasing 20: ";
    for(auto it=s.begin(); it!=s.end(); it++){ // Iterating through set
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it: s){
        cout<<it<<" ";
    }
    cout<<endl;

    if(s.find(30) != s.end()){
        cout<<"30 is found in the set."<<endl;
    } else {
        cout<<"30 is not found in the set."<<endl;
    }
    auto it=s.lower_bound(15); //it points to the first element greater than or equal to 15 
    cout<<"Lower bound of 15: "<<*it<<endl; // Lower bound of 15
    auto it2=s.upper_bound(25); //it2 points to the first element greater than 25
    cout<<"Upper bound of 25: "<<*it2<<endl; // Upper bound of 25

    return 0;
}
// Set is an ordered collection of unique elements.
// Common operations: insert(), erase(), find(), count(), size(), empty(), begin(), end(), lower_bound(), upper_bound()
// Example usage of set in C++ STL  
// This code demonstrates basic set operations like insert, erase, find, count, and iteration.
// It shows how to create a set, add elements to it, remove elements, check for presence of elements, and iterate through the set.
// The set is implemented using the C++ Standard Template Library (STL).
// Output:
// Size of set: 3   
// Elements in the set: 10 20 30
// 1
// Size of set after erasing 20: 2
// Elements in the set after erasing 20: 10 30
// 10 30
// 30 is found in the set.
// Lower bound of 15: 30
// Upper bound of 25: 30
// Note: Sets automatically sort the elements in ascending order and do not allow duplicate values.
// Sets are widely used in various applications like maintaining a collection of unique items, performing set operations (union, intersection, difference), and implementing algorithms that require sorted data.
// Make sure to include the <set> header if not using bits/stdc++.h
// Example of iterating through the set using both iterator and range-based for loop
// The first loop uses an iterator to traverse the set, while the second loop uses a range-based for loop for the same purpose.
// Note: Attempting to find or erase an element that does not exist in the set will not cause an error; find() will return end() and erase() will have no effect.
