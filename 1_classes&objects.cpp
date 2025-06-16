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



//to access private memeber we can use setter/getter functions

//setter-private values  set krna
        void SetSalary(double s){
            salary=s;
        }
//getter-private value get krna
        double GetSalary(){
            return salary;
        }
    };
int main() {
    Teacher t1;
    t1.name="swati";
    t1.dept="ece-ai";
    t1.subject="c++";
    t1.salary=20000;
    cout << t1.name<<endl;    //output-swati
     cout << t1.salary<<endl; //output-cpp:7:12: note: declared private here
    t1.SetSalary(500000);
    cout<<GetSalary()>>endl;  //output-500000

    return 0;
}
