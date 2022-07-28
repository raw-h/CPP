#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int l = 1; l <= i; l++)
            if (l == 1 || l == i)
                cout << "*";
            else
                cout << " ";
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";
        for (int k = i; k >= 1; k--)
            if (k == i || k == 1)
                cout << "*";
            else
                cout << " ";
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int l = 1; l <= i; l++)
            if (l == 1 || l == i)
                cout << "*";
            else
                cout << " ";
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";
        for (int k = i; k >= 1; k--)
            if (k == i || k == 1)
                cout << "*";
            else
                cout << " ";
        cout << endl;
    }
    return 0;
}