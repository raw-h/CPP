#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    Rectangle(int l, int b)
    {
        this->length = l;
        this->breadth = b;
    }

    int area()
    {
        return (this->length * this->breadth);
    }
};

int main()
{
    Rectangle r1(4, 5);
    Rectangle r2(5, 8);

    int a1 = r1.area();
    int a2 = r2.area();

    cout << "Area of rectangle 1 = " << a1 << "\n Area of rectangle 2 = " << a2 << endl;
    return 0;
}