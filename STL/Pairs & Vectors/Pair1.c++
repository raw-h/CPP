#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string> p;
    // p = make_pair(2, "abc"); The internal function to create a pair.
    p = {3,"defg"}; // 2nd way of to input a value in a pair.

    pair<int, string> p1 = p; // This sends a copy of p into p1. and any changes made in p1 won't be reflected into p.
    // pair<int, string> &p1 = p; Here p is passed into p1 in a referencial manner so any changes made into p1 will also get reflected into p.
    p1.first = 4, p1.second = "zxcv";

    cout << p.first << " " << p.second << endl; // this is how we can access the values of a pair. We do not use p.first() or p.second() because first and second are not functions.
    cout << p1.first << " " << p1.second << endl;

    pair<int,int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};
    swap(p_array[0], p_array[2]);
    for(int i = 0; i < 3; i++)
        cout << p_array[i].first << " " << p_array[i].second << endl;
    
    cout << "Enter first(integer) and second(character) value for p2: ";
    pair<int, char> p2;
    cin >> p2.first >> p2.second;
    cout << p2.first << " " << p2.second;
    return 0;
}