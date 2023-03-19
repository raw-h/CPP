#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello there" << endl;
    }

    int sayHello(char name)
    {
        cout << "Hii " << name << endl;
        return 1;
    }

    void sayHello(string name)
    {
        cout << "Hello " << name << endl;
    }
};

class B
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Output " << value2 - value1 << endl;
    }
};

class Animal
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};

int main()
{
    // A obj;
    // obj.sayHello("Shubham");

    // B obj1, obj2;

    // obj1.a = 4;
    // obj2.a = 7;
    // obj1 + obj2;

    Dog obj3;
    obj3.speak();
    return 0;
}