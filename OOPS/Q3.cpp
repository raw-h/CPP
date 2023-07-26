#include <bits/stdc++.h>
using namespace std;

class Triangle
{
    int side1;
    int side2;
    int side3;
    int height; 
    int base;

public:
    Triangle(int s1, int s2, int s3, int h, int b)
    {
        this->side1 = s1;
        this->side2 = s2;
        this->side3 = s3;
        this->base = b;
        this->height = h;
    }

    void perimeter()
    {
        cout << "Perimeter = " << this->side1 + this->side2 + this->side3 << endl;
    }

    void area()
    {
        cout << "Area = " << (float)1/2 * (this->base * this->height) << endl;
    }
};

int main()
{
    Triangle t1(3, 4, 5, 3, 3);
    t1.perimeter();
    t1.area();
    return 0;
}