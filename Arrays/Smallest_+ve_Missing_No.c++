#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    bool check[n] = {false};

    for (int i = 0; i < n; i++)
    {
        if(arr[i] >= 0)
            check[arr[i]] = true;
    }

    for (int i = 0; i < n; i++)
    {
        if (!check[i]){
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}