#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i;
    for (int j = 2; j < n; j++)
    {

        for (i = 2; i < j; i++)
        {
            if (j % i == 0)
                break;    
                // return 0;
        }
        if (i == j)
            cout << j << endl;
    }
    return 0;
}