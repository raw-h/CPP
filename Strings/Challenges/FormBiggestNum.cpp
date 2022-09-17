// To form the greatest number from the given numeric string.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "53425346987";
    sort(s.begin(), s.end(), greater<int>());
    cout << s << endl;
    // Here greater is used as we have to sort it in decreasing order to obtain the maximum value. We could've also given char in place of int.
    return 0;
}