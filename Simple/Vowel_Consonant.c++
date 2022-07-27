#include<iostream>
using namespace std;
int main(){
    char z;
    cin >> z;
    if (z == 'a' || z == 'e' || z == 'i' || z == 'o' || z == 'u' || z == 'A' || z == 'E' || z == 'I' || z == 'O' || z == 'U')
        cout << z << " is a Vowel" << endl;
    else
        cout << z << " is a Consonant." << endl;
    return 0;
}