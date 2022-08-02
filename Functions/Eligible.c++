#include<iostream>
using namespace std;

bool legal(int s){
    if (s >= 18)
        return true;
    return false;
}
int main(){
    int age;
    cin >> age;
    if(legal(age))
        cout << "Eligible to vote." << endl;
    else
        cout << "Not Eligible to vote." << endl;
    return 0;
}