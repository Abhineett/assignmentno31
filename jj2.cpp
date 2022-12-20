#include<iostream>
#include<stdlib.h>
using namespace std;

 class A{
     protected:
int a,b,c;
 public:

     void insert(){
     cin>>a>>b>>c;

     }

 };

 class B : public A{
 public:

     int sum(){
    insert();
     int d=a+b+c;
     //cout<<x<<y<<z<<endl;
     cout<<d<<endl;
     return d;

     }
 };
 class C : public B{
 public:
     void display(){
         float l=sum();
         float m=l/3;
         cout<<"the percentage of the student is "<<m<<endl;

     }
 };

int main(){
C obj;
obj.display();
}
