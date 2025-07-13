//constructor:

#include <iostream>
#include <string>
using namespace std;

class Teacher{
   
    
private:
 double salary;
public:
string name;
string dept;
string subject;
  
Teacher(){
       cout<<"default constructor"<<endl;
       dept = "CSE";
   } 
Teacher(string name_con, string dept_con){
       cout<<"Parametrised constructor"<<endl;
       name = name_con;
       dept = dept_con;
       
   } 
   
 
  
  void setsalary(double sal){
      salary = sal;
  }
 void getsalary(){
      cout<<salary<<endl;
  }
  
  void changeDept(string new_dept){
      dept = new_dept;
  }
  
};

int main() {

    Teacher t1;
    t1.name = "saurabh";
    t1.dept = "CSE";
    
    t1.setsalary(25000);
    cout<<t1.name<<endl;
    t1.getsalary();
    Teacher t2;
    cout<<t1.dept<<endl;
    Teacher t3("abc","ME");
    cout<<t3.name<<endl;
    cout<<t3.dept<<endl;
    return 0;
}
