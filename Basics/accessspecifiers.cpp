#include <iostream>
using namespace std;

class Demo {
public:   // Public section
    int pubVar;   // Accessible everywhere

    void setPubVar(int val) {
        pubVar = val;
    }

private:  // Private section
    int privVar;  // Accessible only inside this class

    void setPrivVar(int val) {
        privVar = val;
    }

protected: // Protected section
    int protVar;  // Accessible inside class + derived classes

    void setProtVar(int val) {
        protVar = val;
    }
};

// Derived class to show protected access
class Child : public Demo {
public:
    void accessProtected() {
        protVar = 50; // ✅ Allowed (protected accessible in child class)
        cout << "Protected variable in child: " << protVar << endl;
    }
};

int main() {
    Demo obj;
    obj.pubVar = 10; // ✅ Allowed (public)
    cout << "Public variable: " << obj.pubVar << endl;

    // obj.privVar = 20; ❌ Error (private not accessible outside class)
    // obj.protVar = 30; ❌ Error (protected not accessible outside class)

    Child c;
    c.accessProtected(); // ✅ Access protected via child class method

    return 0;
}
