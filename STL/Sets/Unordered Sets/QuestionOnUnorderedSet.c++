#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string a;
        cin >> a;
        s.insert(a);
    }
    int x;
    cin >> x;
    while(x--){
        string p; 
        cin >> p;
        auto pt = s.find(p);
        if(pt != s.end())
            cout << "Yes, it is present." << endl;
        else 
            cout << "No, it is not present." << endl;
    }
    return 0;
}