#include<iostream>
using namespace std;
class A
{
public:
    int a,b;
    void get_data()
    {
        cout<<endl<<"\nEnter value of a and b : ";
        cin>>a>>b;
    }
};
class B:public A
{
public:
    int s;
    void sum()
    {
        cout<<endl<<"***************Sum****************"<<endl;
        s=a+b;
        cout<<endl<<"Sum of "<<a<<" and "<<b<<" is "<<s;
    }

};
class C:public A
{
public:
    int m;
    void mul()
    {
        cout<<endl<<"***************Multiplication****************"<<endl;
        m=a*b;
        cout<<endl<<"Multiplication of "<<a<<" and "<<b<<" is "<<m<<endl;
    }
};
class D:public A
{
public:
    int md;
    void mod()
    {
        cout<<endl<<"***************Modulus****************"<<endl;
        md=a%b;
        cout<<endl<<"Modulus of "<<a<<" and "<<b<<" is "<<md<<endl;
    }
};
class E:public A
{
public:
    float d;
    void div()
    {
        cout<<endl<<"***************Div****************"<<endl;
        d=float(a/b);
        cout<<endl<<"Division of "<<a<<" and "<<b<<" is "<<d<<endl;
    }
};
int main()
{
    B b1;
    C c1;
    D d1;
    E e1;
    b1.get_data();
    b1.sum();
    c1.get_data();
    c1.mul();
    d1.get_data();
    d1.mod();
    e1.get_data();
    e1.div();
    return 0;
}
