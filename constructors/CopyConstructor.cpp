#include <iostream>
using namespace std;

class Student {
    int roll;
public:
    Student(int r) { roll = r; }
    // Copy constructor
    Student(const Student &s) {
        roll = s.roll;
        cout << "Copy Constructor Called\n";
    }
    void display() { cout << "Roll = " << roll << endl; }
};

int main() {
    Student s1(101);
    Student s2(s1); // invokes copy constructor
    s2.display();
    return 0;
}
