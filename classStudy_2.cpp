#include<iostream>
using namespace std;

class Field{
public:
    virtual void sound(){
        cout << "the Fieldae is barking" << endl;
    }
};

class Cat : public Field{
public:
    void sound(){
        cout << "meow meow meow~" << endl;
    }
};

class Lepard : public Field{
public:
    void sound(){
        cout << "the Lepard is bellowing" << endl;
    }
};

int main(){
    Field *cat_1 = new Cat;
    Field *lepard_1 = new Lepard;
    cat_1 -> sound();
    lepard_1 -> sound();
}