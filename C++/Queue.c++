#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<"Front element: "<<q.front()<<endl; // Front element
    cout<<"Size of queue: "<<q.size()<<endl; // Size of queue

    q.pop();
    cout<<"After popping, front element: "<<q.front()<<endl; // Front element after pop
    cout<<"Size of queue after popping: "<<q.size()<<endl; // Size after pop

    queue<int> q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);
    while(q1.empty()==false){
        cout<<q1.front()<<" ";
        q1.pop();
    }

    return 0;
}
// Queue follows FIFO (First In First Out) principle.
// Common operations: push(), pop(), front(), back(), size(), empty()
// Example usage of queue in C++ STL
// This code demonstrates basic queue operations like push, pop, front, and size.   
// It shows how to create a queue, add elements to it, remove elements, and access the front element.
// The queue is implemented using the C++ Standard Template Library (STL).
// Output:
// Front element: 10    
// Size of queue: 3
// After popping, front element: 20
// Size of queue after popping: 2
// Note: Queue does not provide iterators to traverse through its elements.
// You can only access the front and back elements directly.
// Queues are widely used in various applications like scheduling algorithms, breadth-first search in graphs, and buffering data streams.
// Make sure to include the <queue> header if not using bits/stdc++.h
// Example of popping all elements from the queue
// The while loop continues until the queue is empty, printing and popping each front element.
// Output of the while loop will be: 10 20 30 40 50
// This demonstrates the FIFO behavior of the queue data structure.
// Note: Attempting to access the front element of an empty queue will lead to undefined behavior. Always check if the queue is empty before calling front() or pop().
