#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int l = 1; l <= i; l++)
            cout << "*";
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";
        for (int k = i; k >= 1; k--)
            cout << "*";
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int l = 1; l <= i; l++)
            cout << "*";
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";
        for (int k = i; k >= 1; k--)
            cout << "*";
        cout << endl;
    }
    return 0;
}