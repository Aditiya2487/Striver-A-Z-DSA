#include<bits/stdc++.h>
using namespace std;
int main(){
    //for max-heap and for min-heap use priority_queue<int, vector<int>, greater<int>> pq;
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    cout<<"Top element: "<<pq.top()<<endl; // Top element
    cout<<"Size of priority queue: "<<pq.size()<<endl; // Size of priority queue
    pq.pop();
    cout<<"After popping, top element: "<<pq.top()<<endl; // Top element after pop
    cout<<"Size of priority queue after popping: "<<pq.size()<<endl; // Size after pop
    priority_queue<int> pq1;
    pq1.push(10);
    pq1.push(20);
    pq1.push(30);
    pq1.push(40);
    pq1.push(50);
    while(pq1.empty()==false){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    return 0;
}
// Priority Queue follows the principle of always removing the highest (or lowest) priority element first.  
// Common operations: push(), pop(), top(), size(), empty()
// Example usage of priority queue in C++ STL
// This code demonstrates basic priority queue operations like push, pop, top, and size.
// It shows how to create a priority queue, add elements to it, remove elements, and access the top element.
// The priority queue is implemented using the C++ Standard Template Library (STL).
// Output:
// Top element: 30  
// Size of priority queue: 3
// After popping, top element: 20
// Size of priority queue after popping: 2
// Note: By default, C++ STL priority_queue is a max-heap, meaning the largest element has the highest priority.
// You can create a min-heap by using greater<int> as the comparison function.
// Priority queues are widely used in various applications like Dijkstra's algorithm, Huffman coding, and event-driven simulation.
// Make sure to include the <queue> header if not using bits/stdc++.h
// Example of popping all elements from the priority queue
// The while loop continues until the priority queue is empty, printing and popping each top element.
// Output of the while loop will be: 50 40 30 20 10 
// This demonstrates the priority behavior of the priority queue data structure.
// Note: Attempting to access the top element of an empty priority queue will lead to undefined behavior. Always check if the priority queue is empty before calling top() or pop().
