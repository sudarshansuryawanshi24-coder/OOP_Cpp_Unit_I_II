#include <iostream>
using namespace std;

class Student {
public:
    // Static member is shared by all objects.
    static int count;

    Student() {
        count++;
    }
};

// Define and initialize the static member.
int Student::count = 0;

int main() {
    Student s1, s2, s3;

    cout << Student::count;

    return 0;
}
