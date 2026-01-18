#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Top element: "<<s.top()<<endl; // Top element
    cout<<"Size of stack: "<<s.size()<<endl; // Size of stack

    s.pop();
    cout<<"After popping, top element: "<<s.top()<<endl; // Top element after pop
    cout<<"Size of stack after popping: "<<s.size()<<endl; // Size after pop
stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    while(s1.empty()==false){
        cout<<s1.top()<<" ";
        s1.pop();
    }

    return 0;
}
// Stack follows LIFO (Last In First Out) principle.
// Common operations: push(), pop(), top(), size(), empty()
// Example usage of stack in C++ STL
// This code demonstrates basic stack operations like push, pop, top, and size.
// It shows how to create a stack, add elements to it, remove elements, and access the top element.
// The stack is implemented using the C++ Standard Template Library (STL).
// Output:
// Top element: 30  
// Size of stack: 3
// After popping, top element: 20
// Size of stack after popping: 2
// Note: Stack does not provide iterators to traverse through its elements.
// You can only access the top element directly.
// Stacks are widely used in various applications like expression evaluation, backtracking algorithms, and function call management in programming languages.
// Make sure to include the <stack> header if not using bits/stdc++.h
// Example of popping all elements from the stack
// The while loop continues until the stack is empty, printing and popping each top element.
// Output of the while loop will be: 50 40 30 20 10
// This demonstrates the LIFO behavior of the stack data structure.
// Note: Attempting to access the top element of an empty stack will lead to undefined behavior. Always check if the stack is empty before calling top() or pop().


