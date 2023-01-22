/*
Given N strings, print unique strings in lexicographical order with their frequency.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        // q[a] = q[a] + 1; Here when we type q[a] it will be equal to 0 as the value type in this map is integer.
        q[a]++;
    }
    for(auto pt: q)
        cout << pt.first << " " << pt.second << endl;
    return 0;
}