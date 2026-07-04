#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Shape* s = new Circle();
    s->draw();   // abstraction hides implementation
    delete s;
    return 0;
}
