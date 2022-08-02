#include<iostream>
using namespace std;

int sum_of_N(int a){
    int b = 0;
    for (int i = 1; i <= a; i++)
        b += i;
    return b;
}

int main(){
    int a;
    cin >> a;
    int sum = sum_of_N(a);
    cout << "Sum till " << a << " is " << sum << endl;
    return 0;
}