#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string> p;
    p.first=10;
    p.second="Hello";
    cout<<p.first<<" "<<p.second<<endl;

     pair  <int, string> student;
    student.first = 1;
    student.second = "Alice";

    cout << "Roll No: " << student.first << ", Name: " << student.second << endl;

    pair <pair<int, char >, int> complexPair = {{2, 'B'}, 20};
    cout << "Roll No: " << complexPair.first.first << ", Section: " << complexPair.first.second;
    cout << ", Marks: " << complexPair.second << endl;

    pair<int, int> p1 = make_pair(5, 10);// can also be written as pair<int,int> p1(5,10); and pair<int,int>p1={5,10};
    cout << "First: " << p1.first << ", Second: " << p1.second << endl;
    pair<int, int> p2 = p1; // Copying p1 to p2
    cout << "First: " << p2.first << ", Second: " << p2.second << endl;

    return 0;
}