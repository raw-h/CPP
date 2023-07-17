#include <bits/stdc++.h>
using namespace std;

int calc_power(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    
    int ans = calc_power(a, b/2);
    if(b & 1)
        return a * ans * ans;
    else
        return ans * ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int answer = calc_power(a, b);
    cout << answer << endl;
    return 0;
}