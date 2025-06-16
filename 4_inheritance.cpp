#include <iostream>
#include <string>
using namespace std;
//BASE CLASS
class Person{
    public:
    string name;
    int age;
     //construcctor
     Person(){}
};

//DERIVED CLASS
class Student:public Person{
    //name,age,roll no.
    public:
    int rollno;
    
    //method
    void getInfo(){
        cout<<"name: "<<name<<endl;
          cout<<"age: "<<age<<endl;
            cout<<"roll no: "<<rollno<<endl;
        
    }
};

int main() {
    Student s1;
    s1.name="rahul";
    s1.age=21;
    s1.rollno=12;
    s1.getInfo();
    return 0;
}


// output:
// name: rahul
// age: 21
// roll no: 12
