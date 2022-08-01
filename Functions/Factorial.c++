#include<iostream>
using namespace std;

int fact(int a){
    int factorial = 1;
    for (int i = 2; i <= a; i++)
        factorial *= i;
    cout << factorial << endl;
    return 0;
}
int main(){
    int n;
    cin >> n;
    fact(n);
    return 0;
}