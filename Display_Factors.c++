#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int flag = 0;
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            flag = 1;
            cout << i << " ";
        }
        else
            continue;
    }
    if (flag == 0)
        cout << "The number is prime." << endl;
    return 0;
}