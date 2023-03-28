#include<bits/stdc++.h>
using namespace std;
int main(){
    int i = 0;
    int n;
    cin >> n;
    while(i < n){
        int j = 1;
        while(j <= n){
            cout << char('A' + i) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}