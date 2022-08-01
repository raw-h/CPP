#include<iostream>
using namespace std;

int fact(int a)
{
    int factorial = 1;
    for (int i = 2; i <= a; i++)
        factorial *= i;
    return factorial;
}

int bin_coeff(int z, int y)
{
    int x = fact(z) / (fact(z - y) * fact(y));
    cout << x << " ";
    return 0;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++)
        {
            bin_coeff(i , j);
        }
        cout << endl;
    }
    return 0;
}