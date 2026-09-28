#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Member function to display student details.
    void show() {
        cout << name << " " << age << endl;
    }
};

int main() {
    // Create an object of Student class.
    Student s1;

    s1.name = "Amit";
    s1.age = 20;

    s1.show();

    return 0;
}
