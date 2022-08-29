#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    int * a_pointer = &a;
    cout << "Value of A: "<< a << endl;
    cout << "Value of a_pointer: " << a_pointer << endl;
    cout << "Value inside a_pointer: " << *a_pointer << endl;

    *a_pointer = 20;
    cout << "Value of A changed using *a_pointer: " << *a_pointer << endl;
    cout << "Value of A: " << a << endl;
    return 0;
}