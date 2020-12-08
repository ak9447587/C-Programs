#include<iostream>
using namespace std;
class A
{
public:
    void virtual show()
    {
        cout<<"Hello class A";
    }
};
class B:public B
{
public:
    void show()
    {
        cout<<"Hello class B";
    }
};
int main()
{
    A a;
    B b;
    a.show();
    b.show();
    return 0;
}
