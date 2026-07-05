#include <iostream>
using namespace std;

class Student {
    int roll;
public:
    // Default constructor
    Student() {
        roll = 0;
        cout << "Default Constructor Called\n";
    }
    void display() { cout << "Roll = " << roll << endl; }
};

int main() {
    Student s1; // invokes default constructor
    s1.display();
    return 0;
}
