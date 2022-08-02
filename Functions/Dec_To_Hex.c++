#include <bits/stdc++.h>
using namespace std;

string dec_to_hex(int z)
{
    string ans = "";
    while (z != 0)
    {
        if (z % 16 >= 0 && z % 16 <= 9)
            ans += to_string(z % 16);
        else if(z % 16 >= 10 && z % 16 <= 15){ 
            char c = 'A' + (z % 16) - 10;
            ans.push_back(c);
        }
        z /= 16;
    }
    reverse(ans.begin() , ans.end());
    return ans;
}

int main()
{
    int n;
    cin >> n;
    string hex = dec_to_hex(n);
    cout << "The decimal number in hexadecimal is :- " << hex << endl;
    return 0;
}