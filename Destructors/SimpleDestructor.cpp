#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called\n";
    }
    ~Demo() {
        cout << "Destructor called\n";
    }
};

int main() {
    Demo obj; // constructor runs
    // destructor runs automatically when obj goes out of scope
    return 0;
}
