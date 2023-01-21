#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {2,3,5,6,7};
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    vector<int> :: iterator bt = v.begin();
    cout << *(bt + 2) << endl;

    for(bt = v.begin(); bt < v.end(); bt++) // We can use bt++ as it moves to the next iterator
        cout << *bt << " ";
    cout << endl;

    // Iterator on Pairs
    vector<pair<int,int>> v_p = {{1,10}, {2,20}, {3,30}};
    vector<pair<int, int>> :: iterator it;
    for(it = v_p.begin(); it < v_p.end(); it++)
        cout << (*it).first << " " << (*it).second;
    cout << endl;
    // cout << (it->first) << " " << (it->second); This is the more common method used for accessing values of a pair.
    return 0;
}