#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int num = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            num ++;
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}