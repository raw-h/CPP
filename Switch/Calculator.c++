#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cin >> a >> b >> op;
    switch (op)
    {
    case '+':
        cout << a << " + " << b << " is " << a + b << endl;
        break;

    case '-':
        cout << a << " - " << b << " is " << a - b << endl;
        break;

    case '*':
        cout << a << " * " << b << " is " << a * b << endl;
        break;

    case '/':
        cout << a << " / " << b << " is " << a / b << endl;
        break;

    case '%':
        cout << a << " % " << b << " is " << a % b << endl;
        break;
    default:
        cout << "Enter a valid operator please." << endl;
        break;
    }
    return 0;
}