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
        cout << (*it).first << " " << (*it).second << endl;
    // cout << (it->first) << " " << (it->second); This is the more common method used for accessing values of a pair.

    cout << "Printing the vector using range based loop\n";
    for(int damn : v)
        damn++;
        // cout << damn << " ";  Here the copy of elements is being sent to damn. We can make the changes by using &damn instead of damn.

    // In the previous loop we changed each element of the vector v by damn++, but it will have no effect in the real vector.
    // Because when we print it then the values of v will be printed.
    for (int damn : v)
        cout << damn << " "; // Here the copy of elements is being sent to damn.
    cout << endl;
    
    cout << "Printing the pair v_p1" << endl;
    vector<pair<int,int>> v_p1 = {{1,2}, {3,4}};
    for(pair<int,int> damn1 : v_p1)
        cout << damn1.first << " " << damn1.second << endl;
    

    cout << "Using auto and ranged loops:-" << endl;
    vector<int> v1 = {2, 3, 5, 6, 7};
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;

    for (auto bt = v.begin(); bt < v.end(); bt++) // We can use bt++ as it moves to the next iterator
        cout << *bt << " ";
    cout << endl;

    vector<pair<int, int>> v_p10 = {{1, 2}, {3, 4}};
    for (auto damn10 : v_p10)
        cout << damn10.first << " " << damn10.second << endl;
    return 0;
}