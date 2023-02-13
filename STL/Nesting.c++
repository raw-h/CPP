#include<bits/stdc++.h>
using namespace std;
int main(){
    map<pair<string,string>, vector<int>> m;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string fn, ln;
        cin >> fn >> ln;
        int count;
        cin >> count;
        for(int j = 0; j < count; j++){
            int x;
            cin >> x;
            m[{fn, ln}].push_back(x);
        }
    }
    for(auto &pr : m){
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout << full_name.first << " " << full_name.second << " " << pr.second.size() << endl;
        for(auto &it : list)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}