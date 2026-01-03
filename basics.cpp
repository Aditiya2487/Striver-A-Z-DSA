#include<bits/stdc++.h>
using namespace std;

int main(){
    //range -> [-10^9, 10^9]
    int a,b;
    cin >> a >> b;
    cout << a + b << endl;

    int numInt = INT_MAX; // Maximum value for an integer
    cout << "The maximum integer value is: " << numInt << endl;
    //[10^12]
    long numLongInt = LONG_MAX; // Maximum value for a long integer 
    cout << "The maximum long integer value is: " << numLongInt << endl;
    // [10^18]
    long long numLong = LLONG_MAX; // Maximum value for a long long integer
    cout << "The maximum long long integer value is: " << numLong << endl;

    return 0;
}