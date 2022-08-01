#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n == 1 || n == 0){    
        cout << "Factorial = " << 1 << endl;
        return 0;
    }
    int fact = 1;
    while (n >= 1)
    {
        fact *= n;
        n--;
    }
    cout << "Factorial = " << fact << endl;
    return 0;
}