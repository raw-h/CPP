#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if (a % 2 == 0)
        cout << a << " is an Even number." << endl;
    else
        cout << a << " is an Odd number." << endl;
    return 0;
}