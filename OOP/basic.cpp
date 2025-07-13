#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:
 double salary;
public:
 string name;
  string dept;
  
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
    
    return 0;
}
