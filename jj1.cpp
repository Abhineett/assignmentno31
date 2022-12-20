#include<iostream>
using namespace std;
class base
{
private:

   int a,b,c;
public:
    int sum()
    {
        cout<<"enter number.";
        cin>>a>>b;
        c=a+b;
        return c;
    }

};
class derived : private base
{
    //sum();
public:

    display()
    {


        cout<<sum();
    }

};
int main()
{
    derived d;
    d.display();

    return 0;
}
