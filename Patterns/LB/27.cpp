#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    int count = n;
    while(i <= n){
        int j = 1;
        while(j <= (n - i + 1)){
            cout << j << " ";
            j++;
        }
        j = 1;
        while(j < i){
            cout << "* ";
            j++;
        }

        j = 1;
        while(j < i){
            cout << "* ";
            j++;
        }
        j = 1;
        count = n - i + 1;
        while(j <= (n - i + 1)){
            cout << count << " ";
            count--;
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}