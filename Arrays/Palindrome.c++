#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    char arr[n+1];
    cin >> arr;
    bool palin = true;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != arr[n-1-i]){
            palin = false;
            break;
        }
    }
    if(palin)
        cout << "Word is palindrome." << endl;
    else
        cout << "Word is not palindrome." << endl;
    return 0;
}