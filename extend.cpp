#include <iostream>
using namespace std;
class Vehicle
{
public:
    virtual void display() = 0;
};

class Boat : public Vehicle
{
public:
    void display()
    {
        cout << "This is a boat" << endl;
    }
};

class Automobile : public Vehicle
{
public:
    void display()
    {
        cout << "This is a Automobile" << endl;
    }
};

class SportsCar : public Automobile
{
public:
    void display()
    {
        cout << "This is a SportsCar" << endl;
    }
};
int main()
{
    Vehicle *p;
    /**********Program**********/
    p = new Boat();
    p->display();
    p = new Automobile();
    p->display();
    p = new SportsCar();
    p->display();

    /**********  End  **********/
    return 0;
}
