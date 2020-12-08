#include <iostream>

using namespace std;
class A
{
    public:
    int x=10;

    friend void display();

};

void display()
{
    A a;
    cout<<"Value for x is"<<a.x<<endl;
}

class B
{
    public:
    int y=20;
    friend void display1();

};

void display1()
{
    B b;
    cout<<"Value for y is"<<b.y;
}
int main()
{
    display();
    display1();
return 0;
}
