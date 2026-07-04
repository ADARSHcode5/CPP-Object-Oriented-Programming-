#include <iostream>
using namespace std;

class Demo {
private:
    int* data;  // pointer to dynamically allocated memory
public:
    // Constructor
    Demo(int value) {
        data = new int(value);  // allocate memory
        cout << "Constructor called. Value = " << *data << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called. Releasing memory..." << endl;
        delete data;  // free allocated memory
    }

    void showData() {
        cout << "Data = " << *data << endl;
    }
};

int main() {
    cout << "Creating object inside block..." << endl;
    {
        Demo obj(42);   // constructor called
        obj.showData();
    }   // destructor automatically called here when obj goes out of scope

    cout << "Program ends." << endl;
    return 0;
}
