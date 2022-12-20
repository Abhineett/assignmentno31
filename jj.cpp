#include<iostream>
using namespace std;
class person
{
  int age;
  char name[100];
  public:
     void setname()
      {
          cout<<"Enter name.";
          gets(name);

      }
      void setAge()
      {
          cout<<"enter age.";
          cin>>age;

      }
     void getName()
      {

          cout<<"Name is "<<name;
      }
      void getage()
      {
          cout<<"Age is "<<age;

      }

};
class employee : private person
{

    int empid;
    float salary;
public:
    void setEmpid()
    {
        setname();
        setAge();
        cout<<"Enter empid. ";
        cin>>empid;
    }
    void setsalary()
    {
        cout<<"Enter salary. ";
        cin>>salary;
    }
    void getEmpid()
    {
        getName();
        cout<<endl;
        getage();
        cout<<endl;
        cout<<"empid is. "<<empid;

    }
    void getsalary()
    {
        cout<<"salary is. "<<salary;

    }
};
int main()
{


    employee e;
    e.setEmpid();
    e.setsalary();
    e.getEmpid();
    e.getsalary();

    return 0;
}
