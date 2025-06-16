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


------------------------------------------------------lets see which constructor is called first---------------------------------------------
    #include <iostream>
#include <string>
using namespace std;
//BADSE CLASS
class Person{
   
    public:
    string name;
    int age;
     //construcctor
     Person(){
          cout<<"parent constructor"<<endl;
     }
     
    //  Person(string name, int age){
    //      this->name=name;
    //      this->age=age;
    //  }
};

//DERIVED CLASS
class Student:public Person{
    
    //name,age,roll no.
    public:
    int rollno;
    //construcctor
     Student(){
          cout<<"child constructor"<<endl;
     }
    
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

// output-
//  parent constructor
// child constructor
// name: rahul
// age: 21
// roll no: 12
