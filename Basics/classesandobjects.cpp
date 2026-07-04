#include <iostream>
using namespace std;

// Define a class named Student
class Student {
public: 
    string name;   // Data member (variable)
    int age;       // Data member (variable)

    // Member function to display student details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;        // Create an object of Student
    s1.name = "Rahul"; // Assign values to data members
    s1.age = 20;
    s1.display();      // Call member function

    return 0;
}
