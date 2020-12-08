#include<iostream>
using namespace std;
class A
{
public:
    int a,b;
    void get_data()
    {
        cout<<"Enter value of a and b : ";
        cin>>a>>b;
    }
};
class B:public A
{
public:
    int c;
    void sum()
    {
        c=a+b;
    }

};
class C:public B
{
public:
    void display()
    {
        cout<<"\nSum of "<<a<<" and "<<b<<" is "<<c;
    }
};
int main()
{
    C c1;
    c1.get_data();
    c1.sum();
    c1.display();
    return 0;
}
