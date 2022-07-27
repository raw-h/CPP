#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i;

    //Using for loop.
    cout << "Using for loop." << endl;
    for (i = 1; i <= 10; i++)
        cout << n << " * " << i << " = " << n * i << endl;
    
    //Using while loop.
    i = 1;
    cout << "Using while loop." << endl;
    while (i <= 10)
    {
        cout << n << " * " << i << " = " << n * i << endl;
        i++;
    }
    
    //Using do-while loop.
    i = 1;
    cout << "Using do-while loop." << endl;
    do
    {
        cout << n << " * " << i << " = " << n * i << endl;
        i++;
    } while (i <= 10);
    
    return 0;
}