#include<iostream>
using namespace std;

int dec_to_bin(int z){
    int x = 1;
    int ans = 0;
    while (z != 0)
    {
        ans += (z % 2) * x;
        x *= 10;
        z /= 2;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int binary = dec_to_bin(n);
    cout << "The decimal number in binary is :- " << binary << endl;
    return 0;
}