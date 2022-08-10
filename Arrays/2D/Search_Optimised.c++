#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    
    int key;
    cin >> key;
    
    int r = 0;
    int c = m - 1;
    while (r < n && c >= 0)
    {
        if(arr[r][c] == key){
            cout << "Element found at " << r + 1 << " " << c + 1 << endl;
            return 0;
        }
        else if(arr[r][c] > key)
            c--;
        else
            r++;
    }
    cout << "Element not found!" << endl;
    return 0;
}