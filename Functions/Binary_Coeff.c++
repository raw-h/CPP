#include<iostream>
using namespace std;

int fact(int a)
{
    int factorial = 1;
    for (int i = 2; i <= a; i++)
        factorial *= i;
    return factorial;
}

int bin_coeff(int z, int y){
    int x = fact(z) / (fact(z-y) * fact(y));
    cout << x << endl;
    return 0;
}

int main(){
    int n , r;
    cin >> n >> r;
    bin_coeff(n, r);
    return 0;
}