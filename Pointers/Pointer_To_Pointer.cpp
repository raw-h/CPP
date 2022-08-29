#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 100;
    int *aptr = &a;
    int **bptr = &aptr;
    cout << "Value of A: " << a << endl;
    cout << "Value of aptr: " << aptr << endl;
    cout << "Value inside aptr: " << *aptr << endl;
    cout << "Value of bptr: " << bptr << endl;
    cout << "Value inside bptr: "<< *bptr << endl;
    cout << "Value of a using bptr: " << **bptr << endl; 
    return 0;
}