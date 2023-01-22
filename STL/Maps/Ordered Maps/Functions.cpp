#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &a){
    for(auto &pr : a)
        cout << pr.first << " " << pr.second << endl;
}

int main(){
    map<int,string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a";
    m[5] = "cde";
    m.insert({4, "afg"}); //Insert function, takes O(log(n)) time.

    auto it = m.find(7); //Find function, takes O(log(n)) time.
    if(it == m.end())
        cout << "Key not found.\n";
    else
        cout << it->first << " " << it->second << endl;

    // m.erase(3);
    auto pt = m.find(3);
    if(pt != m.end()) //Here we've used this condition because if the iterator points to a non-existent value then segmentation fault will occur.
        m.erase(pt); //Erase function, it takes iterator as well as key as an input. Takes O(log(n)) time.
    
    print(m);
    m.clear(); // This function is used to clear the whole map.
    return 0;
}