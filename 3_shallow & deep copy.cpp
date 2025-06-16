//PROBLEM OF SHALLOW COPY

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double* cgpaPtr;

    // Constructor
    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double; // dynamic memory allocation
        *cgpaPtr = cgpa;
    }

    // Copy Constructor (deep copy)
    Student( Student &obj) {
        name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *(obj.cgpaPtr);
    }

    // Method
    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }

    // Destructor to free memory
    ~Student() {
        delete cgpaPtr;
    }
};

int main() {
    Student s1("Rahul Kumar", 8.9);
    Student s2(s1); // deep copy
    s1.getInfo();
    
    *(s2.cgpaPtr) = 9.2; // change in s2
    s1.getInfo();        // s1 should remain unchanged
    s2.getInfo();        // s2 shows new value
    
    return 0;
}


// OUTPUT-
// Name: Rahul Kumar
// CGPA: 8.9
// Name: Rahul Kumar
// CGPA: 8.9
// Name: Rahul Kumar
// CGPA: 9.2
