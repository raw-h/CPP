#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";

    m.insert({4, "afg"});

    //There are many ways of printing the maps, LOOK INTO IT IN THE VECTOR AND ITERATOR VIDEO.

//  1. Using Iterator:-
    cout << "Using Iterator:- " << endl;
    map<int, string> :: iterator it;
    for(it = m.begin(); it != m.end(); it++)
        cout << (*it).first << " " <<(*it).second << endl;

//  2. Using Auto:-
    cout << "Using Auto:- " << endl;
    for(auto &pr : m)
        cout << pr.first << " " << pr.second << endl;
    return 0;
}