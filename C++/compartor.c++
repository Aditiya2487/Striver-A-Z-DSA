#include <bits/stdc++.h>
using namespace std;
bool internalCompartor(int el1, int el2)
{
    if (el1 < el2)
        return false;
    return true;
}
void explainComparator()
{
    int arr[] = {5, 6, 1, 2};
    {
        sort(arr, arr + 4, internalCompartor);
        for (int i = 0; i < 4; i++)
        {
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    explainComparator();
}