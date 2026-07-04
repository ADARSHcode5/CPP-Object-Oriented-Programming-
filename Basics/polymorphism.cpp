#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base* b;        // base class pointer
    Derived d;
    b = &d;
    b->show();      // runtime polymorphism
    return 0;
}
