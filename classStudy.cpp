#include<iostream>
using namespace std;
const double PI = 3.14159;

class Shape{
    double s = 0;
public:
    virtual double Area(){return s;}
    void setS(double s){
        this -> s = s;
    }

    double getS(){
        return s;
    }
};

class Rectangle : public Shape{
    double l;
    double w;
public:
    double Area () {
        setS(l * w);
        return getS();
    }

    Rectangle(double l, double w): l(l), w(w){}

    Rectangle(double l): l(l), w(l){}
};

class Circle : public Shape{
    double r;
public:
    double Area(){
        setS(PI * r * r);
        return getS();
    }

    Circle(double r): r(r){}
};

int main(){
    Shape *shape = new Rectangle(2,3);
    cout << shape -> Area();
}