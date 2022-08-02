#include <iostream>
using namespace std;

int oct_to_dec(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int dec = oct_to_dec(n);
    cout << "This is the decimal equivalent of your octal number :- " << dec << endl;
    return 0;
}