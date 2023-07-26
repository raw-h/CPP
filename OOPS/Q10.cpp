#include<bits/stdc++.h>
using namespace std;

class Employee{
    public:
    string name;
    string address;
    int y_o_j;

    Employee(string n, string add, int yoj) : name(n), address(add), y_o_j(yoj){
        cout << name << "       " << y_o_j << "         " << address << endl;
    }
};
int main(){
    cout << "Name" << "     Year Of Joining     " << "Address" << endl;
    Employee e1("Robert", "64-C WallsStreat", 1994);
    Employee e2("Sam   ", "68-D WallsStreat", 2000);
    Employee e3("John  ", "26-B WallsStreat", 1999);
    return 0;
}