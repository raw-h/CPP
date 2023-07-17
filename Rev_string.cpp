#include<bits/stdc++.h>
using namespace std;

void rev(string &str, int i)
{
    if ((i > (str.size() - 1 - i)) || str.size() == 1)
        return;
    swap(str[i], str[str.size() - 1 - i]);
    i++;
    rev(str, i);
}

int main(){
    string str;
    cin >> str;
    int i;
    rev(str, i = 0);
    cout << str << endl;
    return 0;
}