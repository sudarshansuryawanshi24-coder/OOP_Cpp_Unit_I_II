#include <iostream>
using namespace std;

class Test {
private:
    int value;

public:
    // Constructor initializes private data.
    Test(int v) {
        value = v;
    }

    // Inline member function returns the private value.
    inline int getValue() {
        return value;
    }

    // Friend function can access private data.
    friend void show(Test t);
};

// Friend function definition.
void show(Test t) {
    cout << t.value;
}

int main() {
    Test obj(50);

    cout << obj.getValue() << endl;
    show(obj);

    return 0;
}
