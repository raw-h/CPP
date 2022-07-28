#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";
        for (int k = i; k >= 1; k--){
            if(k == i)
                cout << "*" << " ";
            else
                cout << "  ";
        }
        for (int l = 2; l <= i; l++)
            if (l == i)
                cout << "*" << " ";
            else
                cout << "  ";
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";
        for (int k = i; k >= 1; k--)
        {
            if (k == i)
                cout << "*" << " ";
            else
                cout << "  ";
        }
        for (int l = 2; l <= i; l++)
            if (l == i)
                cout << "*" << " ";
            else
                cout << "  ";
        cout << endl;
    }
    return 0;
}