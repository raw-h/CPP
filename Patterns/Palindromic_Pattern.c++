#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i,j,k,l;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * (n - i); j++)
            cout << " " ;
        for (k = i; k >= 1; k--)
            cout << k << " ";
        for (l = 2; l <= i; l++)
            cout << l << " ";
        cout << endl;
    }
    return 0;
}