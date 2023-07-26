#include <bits/stdc++.h>
using namespace std;

class Volume
{
public:
    int length;
    int breadth;
    int height;
    Volume (int l, int b, int h):length(l), breadth(b), height(h){
        cout << "Length = " << length << endl;
        cout << "breadth = " << breadth << endl;
        cout << "Height = " << height << endl;
        cout << "Volume = " << length * breadth * height << endl;
    }
};
int main()
{
    Volume b1(2, 3 ,4);
    return 0;
}