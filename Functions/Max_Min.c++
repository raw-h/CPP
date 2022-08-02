#include<iostream>
using namespace std;

int minimum(int a, int b, int c)
{
    if (a < b)
    {
        if (a < c)
            cout << "Minimum = " << a << endl;
        else
            cout << "Minimum = " << c << endl;
    }
    else if (b < c)
        cout << "Minimum = " << b << endl;
    else
        cout << "Minimum = " << c << endl;
    return 0;
}

int maximum(int a, int b, int c){
    if (a > b)
    {
        if (a > c)
            cout << "Maximum = " << a << endl;
        else
            cout << "Maximum = " << c << endl;
    }
    else if(b > c)
        cout << "Maximum = " << b << endl;
    else
        cout << "Maximum = " << c << endl;
    minimum(a,b,c);
    return 0;    
}

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    maximum(x,y,z);
    return 0;
}