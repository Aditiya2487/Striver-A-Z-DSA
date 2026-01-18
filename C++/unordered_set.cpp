#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> us;
    us.insert(10);  
    us.insert(20);
    us.insert(30);
    cout<<"Size of unordered_set: "<<us.size()<<endl; // Size of unordered_set
    cout<<"Elements in the unordered_set: ";
    for(auto it=us.begin(); it!=us.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"Count of 20 in unordered_set: "<<us.count(20)<<endl; // Count of 20
    us.erase(20); // Erases 20      
    cout<<"Size of unordered_set after erasing 20: "<<us.size()<<endl; // Size after erase
    cout<<"Elements in the unordered_set after erasing 20: ";
    for(auto it:us){
        cout<<it<<" ";
    }
    cout<<endl;
    auto it=us.find(30); // Finds 30
    if(it != us.end()){
        cout<<"30 is found in the unordered_set."<<endl;
    } else {
        cout<<"30 is not found in the unordered_set."<<endl;
    }
    return 0;
}
// Unordered Set is an unordered collection of unique elements.
// Common operations: insert(), erase(), find(), count(), size(), empty(), begin(), end()
// Example usage of unordered_set in C++ STL    
// This code demonstrates basic unordered_set operations like insert, erase, find, count, and iteration.
// It shows how to create an unordered_set, add elements to it, remove elements, check for presence of elements, and iterate through the unordered_set.
// The unordered_set is implemented using the C++ Standard Template Library (STL).
// Output:
// Size of unordered_set: 3
// Elements in the unordered_set: 10 20 30
// Count of 20 in unordered_set: 1
// Size of unordered_set after erasing 20: 2
// Elements in the unordered_set after erasing 20: 10 30
// 30 is found in the unordered_set.
// Note: Unordered sets do not maintain any specific order of elements and provide average O(1) time complexity for insert, erase, and find operations.
// Unordered sets are widely used in various applications like maintaining a collection of unique items with fast access, implementing hash tables, and performing membership tests.
// Make sure to include the <unordered_set> header if not using bits/stdc++.h