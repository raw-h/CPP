#include<iostream>
using namespace std;


int eve_odd(int a){
    if (a % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
    return 0;
}
    
int main(){
    int n;
    cin >> n;
    eve_odd(n);
    return 0;
}