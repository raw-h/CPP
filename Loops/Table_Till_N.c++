#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int j,i;
    cout << "Using for loop" << endl;
    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <= 10; i++)
            cout << j << " * " << i << " = " << j * i << endl;
        cout << endl;
    }

    cout<< "Using while loop" << endl;
    j = 0;
    i = 1;
    while (j < n)
    {
        j++;
        while (i <= 10)
        {
            cout << j << " * " << i << " = " << j * i << endl;
            i++;
        }
        i = 1;
        cout << endl;
    }
    
    cout << "Using do-while loop" << endl;
    j = 0;
    i = 1;
    do
    {
        j++;
        do
        {
            cout << j << " * " << i << " = " << j * i << endl;
            i++;
        } while (i <= 10);
        i = 1;
        cout << endl;
    } while (j < n);
    
    return 0;
}