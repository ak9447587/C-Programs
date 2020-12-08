#include <iostream>

using namespace std;

class A
{
public:
void msg()
{
cout<<"Base class"<<endl;
}

};
class B : public A
{
public:
void msg1()
{
cout<<"derived class"<<endl;
}

};
class C : private A
{
public:
void msg2()
{
msg();
cout<<"Class c"<<endl;
}

};

class D : public B ,public C
{

public:
void msg3()
{
cout<<"class D"<<endl;
}
};
int main()
{

D d;
//c.msg();
d.msg1();
d.msg2();
d.msg3();
return 0;
}
