#include<iostream>
using namespace std;

void alpha_or_not(char j){
    if ((int(j) >= 65 && int(j) <= 90) || (int(j) >= 97 && int(j) <= 122))
        cout << "It is the Alphabet " << j << endl;
    else
        cout << "It is not an Alphabet " << endl;
} 

int main()
{
    char q;
    cin >> q;
    alpha_or_not(q);
    return 0;
}