#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string Name;
    int Roll_No;
};

int main()
{
    Student s1;
    s1.Name = "John";
    s1.Roll_No = 2;
    cout << s1.Name << " " << s1.Roll_No << endl;
    return 0;
}