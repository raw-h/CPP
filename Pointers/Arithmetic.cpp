#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    int *aptr = &a;
    cout << "Value of a pointer before: " << aptr << endl;
    aptr++;
    cout << "Value of a pointer after: " << aptr << endl;

    // char b = 'a';
    // char *bptr = &b;
    // cout << "Value of cptr pointer before: " << bptr << endl;
    // bptr++;
    // cout << "Value of cptr pointer after: " << bptr << endl;
    return 0;
}