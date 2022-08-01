#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int  original_num = n;
    int rem;
    int sum = 0;
    while(n > 0){
        rem = n % 10;
        sum += (rem * rem * rem);
        n /= 10;
    }
    if (sum == original_num)
        cout << "The number is Armstrong." << endl;
    else
        cout << "Not an Armstrong Number." << endl;
    return 0;
}