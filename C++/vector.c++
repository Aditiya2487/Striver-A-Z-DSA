#include <bits/stdc++.h>
        using namespace std;
        
        int main() {
            vector<int> v = {1, 2, 3, 4, 5};
            for (int i : v) {
                cout << i << " ";
            }
            cout << endl;
             vector<int> v1 = {1, 2, 3,4,5,6};
            v1.push_back(14);
            v1.push_back(55);
            for (int i : v1) { // for-each loop
                cout << i << " ";
            }
            cout << endl;
            cout << "Size of vector: " << v1.size() << endl; // Size of vector
            cout << "Front element: " << v1.front()<<endl; // First element
            cout << "Back element: " << v1.back()<<endl; // Last element

             for (vector<int>::iterator it = v1.begin(); it != v1.end(); ++it) {
                cout << *it << " ";
            }
            cout<<endl;

             v1.erase(v1.begin() + 1); // Erase second element
            cout << "After erasing second element: ";
            for (int i : v1) {
                cout << i << " ";
            }
            cout << endl;

             v1.insert(v1.begin() + 1, 20); // Insert 20 at second position
            cout << "\nAfter inserting 20 at second position: ";
            for (int i : v1) {
                cout << i << " ";
            }
            cout << endl;
            cout << "Size of vector: " << v1.size();// Size of vector
            cout << endl;
            cout<<"Element at index 2: "<<v1.at(2)<<endl; // Element at index 2
            cout<<"Element at index 3 using []: "<<v1[3]<<endl; // Element at index 3
            

            swap(v, v1); // Swap v and v1
            cout << "After swapping, elements of v1: ";
            for (int i : v1) {
                cout << i << " ";
            }
            cout<<endl;
            v1.clear(); // Clear the vector
            cout << "Size after clearing: " << v1.size() << endl;
            return 0;
        }