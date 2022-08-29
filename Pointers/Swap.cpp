#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 10;
    int b = 20;
    // cout << a << " " << b << endl;
    // swap(a, b); This was call by Value. And only the value is passed into the fucntion not the variable.
    // cout << a << " " << b << endl;
    int *aptr = &a;
    int *bptr = &b;
    cout << a << " " << b << endl;
    swap(aptr, bptr); // This is call by Reference. And here we have sent the address of our variables.
    // swap(&a, &b); Directly passing the address of a & b into the fucntion swap.
    cout << a << " " << b << endl;
    return 0;
}