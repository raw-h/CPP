#include<iostream>
using namespace std;

int maximum(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
            return a;
        else
            return c;
    }
    else if (b > c)
        return b;
    else
        return c;
}

bool pyth_trip(int a, int b, int c){
    int max = maximum(a , b, c);
    if (max == a)
    {
        if ((max * max) == (b * b) + (c * c))
            return true;
        else
            return false;
    }
    else if (max == b)
    {
        if ((max * max) == (a * a) + (c * c))
            return true;
        else
            return false;
    }
    else
    {
        if ((max * max) == (b * b) + (a * a))
            return true;
        else
            return false;
    }
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (pyth_trip(a,b,c))
        cout << "It is a Pythagorean Triplet." << endl;
    else
        cout << "It is not a Pythagorean Triplet." << endl;
    return 0;
}