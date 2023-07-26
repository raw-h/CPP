#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
    int real;
    int imag;
    Complex(int a, int b)
    {
        this->real = a;
        this->imag = b;
    }
    void sum(Complex c1)
    {
        cout << c1.real + c1.real << " + " << c1.imag + imag << "i" << endl;
    }
    void diff(Complex c1)
    {
        cout << c1.real - real << " + " << c1.imag - imag << "i" << endl;
    }
    void mul(Complex c1)
    {
        cout << ((c1.real * real) - (c1.imag * imag)) << " + " << ((c1.real * real) + (c1.imag * imag)) << "i" << endl;
    }
};

int main()
{
    Complex com(3, 4);
    Complex com2(2, 3);
    com.sum(com2);
    com2.diff(com);
    com2.mul(com);
    return 0;
}