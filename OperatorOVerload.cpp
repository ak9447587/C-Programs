#include<iostream>
using namespace std;
class unaryoverload
{
     int a,b;
public:
        void getdata()
       {
                 cout<<"Enter the Two Numbers:";
                 cin>>a>>b;
       }
       void operator++()
      {
                 a=++a;
                 b=++b;
       }

       void operator--()
       {
                 a=--a;
                 b=--b;
        }
        void operator-()
       {
                 a=-a;
                 b=-b;
        }
        void operator+()
       {
                 a=--a;
                 b=--b;
        }
        void display()
        {
                 cout<<a<<"\t"<<b<<endl;
         }
};
int main()
{

    unaryoverload u;
    u.getdata();
    u.display();
    ++o;
    --o;

    u.display();
     return 0;
}

