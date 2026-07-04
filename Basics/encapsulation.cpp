#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;   // hidden data
    string name;
public:
    void setData(int r, string n) {
        rollNo = r;
        name = n;
    }
    void showData() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    Student s;
    s.setData(101, "Rahul");
    s.showData();
    return 0;
}
