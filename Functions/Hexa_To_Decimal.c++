#include<bits/stdc++.h>
using namespace std;

int hex_to_dec (string a){
    int n = a.length();
    int x = 1;
    int ans = 0;
    for (int i = n-1; i >= 0; i--)
    {
        if (a[i] >= '0' && a[i] <= '9')
            ans += x*(a[i] - '0');
        else if(a[i] >= 'A' && a[i] <= 'F')
            ans += x*(a[i] - 'A' + 10);
        x *= 16;
    }
    return ans;
}

int main()
{
    string z;
    cin >> z;
    int dec = hex_to_dec(z);
    cout << "The decimal equivalent of the hexadecimal number is :- " << dec << endl;
    return 0;
}