#include <bits/stdc++.h>
using namespace std;

class Area
{
    int length;
    int breadth;

public:
    Area(int l, int b){
        this->length = l;
        this->breadth = b;
    }

    int returnArea()
    {
        return (this->length * this->breadth);
    }
};

int main()
{
    int r1l, r1b;
    int r2l, r2b;
    cin >> r1l >> r1b;
    cin >> r2l >> r2b;

    Area r1(r1l, r1b);
    Area r2(r2l, r2b);

    int area1, area2;
    area1 = r1.returnArea();
    area2 = r2.returnArea();
    cout << area1 << " " << area2 << endl;
    return 0;
}