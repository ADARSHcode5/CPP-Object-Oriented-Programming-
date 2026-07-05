#include <iostream>
using namespace std;

class Student {
    int roll;
public:
    // Parameterized constructor
    Student(int r) {
        roll = r;
        cout << "Parameterized Constructor Called\n";
    }
    void display() { cout << "Roll = " << roll << endl; }
};

int main() {
    Student s1(101); // invokes parameterized constructor
    s1.display();
    return 0;
}
