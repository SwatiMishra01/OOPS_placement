#include <iostream>
#include <string>
using namespace std;
class Teacher{
    //access modifier
    private:
    double salary; //as this is mostly private data
    
    
    public:
        //properties
        string name;
        string dept;
        string subject;
       
        
        
        
        //methods
        void ChangeDept(string newDept){
            dept=newDept;
        }
        
    };
int main() {
    Teacher t1;
    t1.name="swati";
    t1.dept="ece-ai";
    t1.subject="c++";
    t1.salary=20000;
    cout << t1.name<<endl;

    return 0;
}
