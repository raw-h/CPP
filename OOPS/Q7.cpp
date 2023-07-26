#include <bits/stdc++.h>
using namespace std;

class Average
{
public:
    static int average(int a, int b, int c)
    {
        cout << "Average = " << (float)(a + b + c) / 3 << endl;
    }
};

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    
    Average ::average(x, y, z);
    return 0;
}