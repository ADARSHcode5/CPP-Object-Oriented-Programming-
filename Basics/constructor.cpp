#include <iostream>
using namespace std;

// Define a class named Student
class Student {
private:
    string name;
    int age;

public:
    // Constructor (automatically called when object is created)
    Student(string n, int a) {
        name = n;   // Initialize data members
        age = a;
        cout << "Constructor called for " << name << endl;
    }

    // Member function to display student details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Object creation automatically calls the constructor
    Student s1("Rahul", 20);  
    Student s2("Priya", 22);

    // Display details
    s1.display();
    s2.display();

    return 0;
}
