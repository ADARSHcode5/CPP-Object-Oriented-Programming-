#include <iostream>
using namespace std;

class Demo {
    int id;
public:
    Demo(int i) : id(i) {
        cout << "Constructor called for object " << id << endl;
    }
    ~Demo() {
        cout << "Destructor called for object " << id << endl;
    }
};

int main() {
    Demo d1(1), d2(2), d3(3);
    cout << "Objects created\n";
    return 0;
}
