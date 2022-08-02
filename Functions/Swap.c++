#include<iostream>
using namespace std;

void swap(int x, int y){
    cout << "Value before swapping :- " << x << " " << y << endl;
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "Value after swapping :- " << x << " " << y << endl;
}

int main(){
    int a, b;
    cin >> a >> b;
    swap(a,b);
    return 0;
}