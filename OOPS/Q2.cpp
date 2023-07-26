#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string Name;
    int Roll_No;
    long long int Phone_No;
    string Address;

    Student(string name, int roll, long long int ph_no, string add){
        this->Name = name;
        this->Address = add;
        this->Phone_No = ph_no;
        this->Roll_No = roll;
    }
    void print(){
        cout << "Name:- " << this->Name << " \nRoll No.:- " << this->Roll_No << " \nAddress:- " << this->Address << " \nPhone No.:- " << this->Phone_No << endl;
    }
};

int main(){
    Student s1("John", 1, 9897540730, "108 Defence Colony");
    Student s2("Sam", 2, 7617684717, "107 Defence Colony");
    cout << "Student 1:- \n";
    s1.print();
    cout << "\nStudent 2:- \n";
    s2.print();
    return 0;
}