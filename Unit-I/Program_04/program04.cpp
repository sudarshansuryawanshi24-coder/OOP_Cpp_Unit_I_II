#include <iostream>
using namespace std;

// Function prototype.
int add(int, int);

int main() {
    int a = 10, b = 20;

    cout << "Sum = " << add(a, b) << endl;

    return 0;
}

// Function definition.
int add(int x, int y) {
    return x + y;
}
