#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<string> s;
    s.insert("abc");
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");
    s.insert("bcd");

    // First Way Of Printing:-
    cout << "Printing: " << endl;
    for (auto pq : s)
        cout << pq << endl;

    // Second way of Printing:-
    // for(auto pw = s.begin(); pw != s.end(); pw++)
    //     cout << (*pw) << endl;

    auto it = s.find("bcd"); // It returns the iterator of the first occurance of the element.
    cout << "Printing the found element: ";
    if (it != s.end())
        cout << (*it) << endl;
    s.erase(it); // This will delete the element present on that iterator value. If the element is present multiple times, the first occurance will be deleted.

    cout << "Printing: " << endl;
    for (auto pq : s)
        cout << pq << endl;
    
    s.erase("abc"); // This will delete all the occurences, if an element is passed inside erase function.
    cout << "Printing: " << endl;
    for (auto pq : s)
        cout << pq << endl;
    return 0;
}