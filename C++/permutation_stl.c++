#include <bits/stdc++.h>
using namespace std;
int main()
{
    // next_permutation(begin, end)
    // Rearranges the range into the next lexicographically greater permutation
    // Returns true if such permutation exists, else false
    // “Lexicographical” = dictionary order.

    vector<int> v = {1, 2, 3};

    do
    {
        for (int x : v)
            cout << x;
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));

    // prev_permutation(begin, end)

    vector<int> v = {3, 2, 1};

    do
    {
        for (int x : v)
            cout << x;
        cout << endl;
    } while (prev_permutation(v.begin(), v.end()));
}
