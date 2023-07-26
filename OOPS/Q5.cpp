#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:
    void setDim(int l, int b){
        this->length = l;
        this->breadth = b;
    }

    void getArea()
    {
        cout << "Area = " << this->length * this->breadth << endl;
    }
};

int main()
{
    Rectangle r1, r2;
    r1.setDim(4,5);
    r2.setDim(5,8);

    r1.getArea();
    r2.getArea();
    return 0;
}