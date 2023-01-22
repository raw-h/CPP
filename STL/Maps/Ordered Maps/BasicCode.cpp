#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a";
    m[5] = "cde";

    m.insert({4, "afg"});

    //There are many ways of printing the maps, LOOK INTO IT IN THE VECTOR AND ITERATOR VIDEO.

    //  1. Using Iterator:-
    cout << "Using Iterator:- " << endl;
    map<int, string> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){// m.end points towards the next iterator to the last element of the map
        cout << (*it).first << " " <<(*it).second << endl;
        // cout << it->first << " " << it->second << endl; This will do the same work as above.
    }

    //  2. Using Auto:-
    cout << "Using Auto:- " << endl;
    for(auto &pr : m) // here we've used & before the variable pr so that a new copy of the map isn't created everytime we try to print the map.
        cout << pr.first << " " << pr.second << endl;
    return 0;
}