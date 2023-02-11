#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> s;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        s.insert(a);
    }

    for(auto pt : s){
        cout << pt << endl;
    }
    return 0;
}