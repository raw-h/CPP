#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    
    cout << "Using while loop" << endl;
    sum = 0;
    cin >> n;
    while (n >= 0)
    {
        sum += n;
        cin >> n;
    }
    cout << sum << endl;

    cout << "Using do-while loop" << endl;
    n = 0;
    sum = 0;
    do
    {
        sum += n;
        cin >> n;
    } while (n >= 0);
    cout << sum << endl;

    return 0;
}