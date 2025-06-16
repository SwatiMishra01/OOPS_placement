-> non parametrized constructor
->parametrized constructor
->copy constructor


--------------------------------------DEFAULT CONSTRUCTOR-------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;
class Teacher{
    public:
    //constructor
    //1->default
    Teacher(){
        dept="ece-ai";
    }
        //properties
        string name;
        string dept;
        string subject;
         double salary; //as this is mostly private data
       

    }; 
int main() {
    Teacher t1;
    t1.name="swati";
    t1.subject="c++";
    t1.salary=20000;
    
   cout<<t1.dept<<endl; //OUTPUT-ece-ai

    return 0;
}



--------------------------------PARAMETRIZED CONSTRUCTOR------------------------------------------
  #include <iostream>
#include <string>
using namespace std;
class Teacher{
    public:
    //parametrized constructor
    Teacher(string n,string d,string s,double sal){
        name=n;
        dept=d;
        subject=s;
        salary=sal;
    }
        //properties
        string name;
        string dept;
        string subject;
         double salary; //as this is mostly private data
       
       
       //methods
       void getInfo(){
           cout<<"name:"<<name<<endl;
            cout<<"subject:"<<subject<<endl;
           
       }

    }; 
int main() {
    Teacher t1("swati","ece-ai","OOPS",300000);
  t1.getInfo();   //OUTPUT- name:swati
                  //        subject:OOPS

    return 0;
}

----------------------------------COPY CONSTRUCTOR---------------------------------------------
  #include <iostream>
#include <string>
using namespace std;
class Teacher{
    public:
    // default copy constructor
    Teacher(string n,string d,string s,double sal){
        name=n;
        dept=d;
        subject=s;
        salary=sal;
    }
        //properties
        string name;
        string dept;
        string subject;
         double salary; //as this is mostly private data
       
       
       //methods
       void getInfo(){
           cout<<"name:"<<name<<endl;
            cout<<"subject:"<<subject<<endl;
           
       }

    }; 
int main() {
    Teacher t1("swati","ece-ai","OOPS",300000);
    Teacher t2(t1);
  t2.getInfo();     // same output as  parametrized as it just copies

    return 0;
}



          ----MAKING CUSTOM COPY CONSTRUCTOR----
#include <iostream>
#include <string>
using namespace std;
class Teacher{
    public:
    
    // default copy constructor
    Teacher(string n,string d,string s,double sal){
        name=n;
        dept=d;
        subject=s;
        salary=sal;
    }
    
    
    // custom copy constructor
    Teacher(Teacher &original_object){
        cout<<"i am custom copy constructor"<<endl;
        this->name=original_object.name;
        this->dept=original_object.dept;
        this->subject=original_object.subject;
        this->salary=original_object.salary;
        
    }
        //properties
        string name;
        string dept;
        string subject;
         double salary; //as this is mostly private data
       
       
       //methods
       void getInfo(){
           cout<<"name:"<<name<<endl;
            cout<<"subject:"<<subject<<endl;
           
       }

    }; 
int main() {
    Teacher t1("swati","ece-ai","OOPS",300000);
    Teacher t2(t1);
  t2.getInfo();

    return 0;
}        
 //OUTPUT-i am custom copy constructor
 //       name:swati
//        subject:OOPS

            




