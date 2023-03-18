#include <bits/stdc++.h>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    int getHeight()
    {
        return this->height;
    }
    // int getWeight()
    // {
    //     return this->weight;
    // }
    void setAge(int x)
    {
        this->age = x;
    }
    void setHeight(int z)
    {
        this->height = z;
    }
    void setWeight(int a)
    {
        this->weight = a;
    }
    void print()
    {
        cout << "Age is: " << this->age << endl;
        cout << "Weight is: " << this->weight << endl;
        cout << "Height is: " << this->height << endl;
    }
    void speaking()
    {
        cout << "Hi" << endl;
    }
};

class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male is sleeping." << endl;
    }
};

class Boy : public Male
{
};

class Female
{
public:
    string color;

    void sleep()
    {
        cout << "Female is sleeping." << endl;
    }
    void moaning()
    {
        cout << "Annh annnnh annnnnnnnnh" << endl;
    }
};

class Girl : public Human, public Female
{
};

class B
{
public:
    void func()
    {
        cout << "I am B" << endl;
    }
};
class A
{
public:
    void func()
    {
        cout << "I am A" << endl;
    }
};

class C : public A, public B
{

};
// class Male : protected Human
// {
// public:
//     string color;

//     void sleep()
//     {
//         cout << "Male is sleeping." << endl;
//     }
//     int getHeight(){
//         return this->height;
//     }
// };

int main()
{
    C obj;
    obj.A::func();
    obj.B::func();
    /*
    Use of Protected Inherited class
    Male M1;
    cout << M1.getHeight() << endl;
    */

    /*
    First use of Publicalyy Inherited class
    Male M1;
    M1.setAge(20);
    M1.setHeight(1);
    M1.setWeight(70);
    M1.print();
    */
    return 0;
}