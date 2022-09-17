#include<iostream>
#include<string>
using namespace std;
int main(){
    //String declaration, input and output.
    string name;
    cin >> name;
    cout << name << endl;

    //This will print nnnnn.
    string str1(5, 'n');
    cout << str1 << endl;

    //Giving a value to the string while declaring it.
    string name2 = "ShubhamRawat";
    cout << name2 << endl;

    //To input a strig with spaces, i.e a whole sentence.
    string introduction;
    getline(cin, introduction);
    cout << introduction << endl;
    // This is working in a wierd way, as there are 2 places for input in this program it is accepting the input for both of them in one go.
    // So to get my name properly, in the first input i have to give: Shubham Shubham Singh Rawat.
    // And the output I'll get is: Shubham
    //                              Shubham Singh Rawat
    return 0;
}