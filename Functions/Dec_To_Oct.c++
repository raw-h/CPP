#include <iostream>
using namespace std;

int dec_to_oct(int z)
{
    int x = 1;
    int ans = 0;
    while (z != 0)
    {
        ans += (z % 8) * x;
        x *= 10;
        z /= 8;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int octal = dec_to_oct(n);
    cout << "The decimal number in octal is :- " << octal << endl;
    return 0;
}