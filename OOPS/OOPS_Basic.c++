#include <bits/stdc++.h>
using namespace std;

class Hero
{
    // Properties
private:
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;

    // Defalut constructor:
    Hero()
    {
        name = new char[100];
        cout << "Constructor called." << endl;
    }

    // Parameterised Constructor:
    Hero(int health)
    {
        cout << "this -> " << this << endl;
        this->health = health;
    }
    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // Copy Constructor
    Hero(Hero &temp) // In this particular constructor we have to pass the object by reference and not by value so that
    // it doesn't get stuc in an infinite loop.
    {
        cout << "Custom copy constructor called" << endl;
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char c)
    {
        level = c;
    }

    void print()
    {
        cout << health << endl;
        cout << level << endl;
        cout << name << endl;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
    
    static int random(){
        return timeToComplete;
    }

    // Destructor
    ~Hero(){
        cout << "Destructor called" << endl;
    }
};

int Hero :: timeToComplete = 10;
int main()
{
    cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;

    /*
    Hero raw;
    raw.setHealth(19);
    raw.setLevel('X');
    char name[8] = "SHUBHAM";
    raw.setName(name);
    
    raw.print();

    Hero asdf(raw);
    asdf.print();


    raw.name[0] = 'P';
    raw.setLevel('V');
    raw.print();
    asdf.print();

    Hero *shu = new Hero();
    delete shu;
    */
   
    /*
    // Creation/Instantiation of an object
    Hero Rawh; // Static Allocation
    Hero * Shubham = new Hero; // Dynamic Allocation, here Shubham is an address.
    Shubham->level = 'A';
    cout << (*Shubham).level << endl;
    cout << Shubham -> level << endl;
    // Rawh.health = 88;
    Rawh.level = 'Z';
    Rawh.setHealth(90);               // Setting health to 90
    cout << Rawh.getHealth() << endl; // Getting health of rawh
    cout << Rawh.level << endl;
    */
    return 0;
}