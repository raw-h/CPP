#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    cout << "Your 2D matrix is :- \n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            cout << arr[i][j] << " ";
        cout << " \n";
    }
    return 0;
}