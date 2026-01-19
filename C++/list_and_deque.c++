#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> lst;
    lst.push_front(20);
    lst.emplace_front(10); // Constructs 10 at the beginning
    for (int i : lst)
    {
        cout << i << " ";
    }
    cout << endl;

    list<int> lst2 = {10, 20, 30};
    cout << "Front element: " << lst2.front();
    cout << endl;

    deque<int> dq = {10, 20, 30};
    dq.push_front(0); // Insert at the beginning
    dq.push_back(40); // Insert at the end
    for (int i : dq)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}