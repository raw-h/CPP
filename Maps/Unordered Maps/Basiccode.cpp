#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a";
    m[5] = "cde";
    m.insert({4, "afg"});
    m.insert({8, "bfg"});
    for(auto &pr: m)
        cout << pr.first << " " << pr.second << endl;
    return 0;
}