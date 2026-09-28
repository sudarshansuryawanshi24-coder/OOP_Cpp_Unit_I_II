#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor runs when the object is created.
    Demo() {
        cout << "Constructor called" << endl;
    }

    // Destructor runs when the object is destroyed.
    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Demo d;

    return 0;
}
