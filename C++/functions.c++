#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1, 23, 0, -9, 13};
    sort(arr, arr + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << accumulate(arr, arr + 5, 0) << endl;
    cout << count(arr, arr + 5, 5) << endl;
    auto it = find(arr, arr + 5, 1);
    if (it == (arr + 5))
    {
        cout << "not found" << endl;
    }
    else
        cout << "found" << endl;

    string str = "abc";
    do
    {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
    cout << *(max_element)(arr, arr + 5); // Returns the max_element
    reverse(arr, arr + 5);
    cout << "After reversing the array :" << endl;
    for (auto &x : arr)
    {
        cout << (x) << " ";
    }
    cout << endl;
    cout << pow(2, 3);
}