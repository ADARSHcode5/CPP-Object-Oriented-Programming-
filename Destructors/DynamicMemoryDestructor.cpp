#include <iostream>
using namespace std;

class Array {
    int *arr;
    int size;
public:
    Array(int s) {
        size = s;
        arr = new int[size]; // allocate memory
        cout << "Constructor allocated memory\n";
    }
    ~Array() {
        delete[] arr; // free memory
        cout << "Destructor released memory\n";
    }
};

int main() {
    Array a1(5);
    return 0;
}

