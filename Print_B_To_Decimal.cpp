#include <iostream>
using namespace std;

int main()
{
    int decimal = 0, binary, remainder, product = 1;
    cin >> binary;
    while (binary != 0)
    {
        remainder = binary % 10;
        decimal = decimal + (remainder * product);
        binary /= 10;
        product *= 2;
    }
    cout << "The number in the decimal form is: " << decimal;
    return 0;
}