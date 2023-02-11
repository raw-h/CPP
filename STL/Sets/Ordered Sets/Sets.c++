#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<string> s;
    s.insert("abc");
    s.insert("zsdf");
    s.insert("bcd");
    auto it = s.find("bcd");

    // First Way Of Printing:-
    for (auto pq : s)
        cout << pq << endl;

    // Second way of Printing:-
    // for(auto pw = s.begin(); pw != s.end(); pw++)
    //     cout << (*pw) << endl;

    if (it != s.end())
        cout << (*it) << endl;
    return 0;
}