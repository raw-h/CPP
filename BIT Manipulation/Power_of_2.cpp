#include<bits/stdc++.h>
using namespace std;

bool ispowof2(int n){
    return (n && !(n & n - 1));
}

int main(){
    cout << ispowof2(1) << endl;
}