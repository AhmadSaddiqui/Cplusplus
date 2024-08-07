#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
double salary;
public:
string name;
string dept;
string subject;
Teacher(string name, string dept, string subject, double salary)
{
    this->name = name;
    this->dept =dept;
    this->subject = subject;
    this->salary = salary;
}
Teacher(Teacher &obj)
{
    this->name = obj.name;
    this->dept = obj.dept;
    this->subject = obj.subject;
    this->salary = obj.salary;
}

void changeDept(string newDept)
{
  dept = newDept; 
}
void setsalary(double s)
{
    salary = s;
}
double getsalary()
{
    return salary;
}
void getinfo()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Department: "<<dept<<endl;
    cout<<"Subject: "<<subject<<endl;
    cout<<"Salary: "<<salary<<endl;
 
}
};


int main()
{
Teacher t1("ahmad","CS","C",25000);
t1.getinfo(); 


return 0;
}