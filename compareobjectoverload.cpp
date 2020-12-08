#include <iostream>

using namespace std;

class binaryop
{
int c=0,y=50;

public:
int x;
binaryop()
{
x=30;
}
binaryop(int z)
{
x=z;
}
binaryop operator +(binaryop ob1)
{
binaryop ob;
ob.c=x+ob1.x; //it will simply add the value of x
return ob;
}

bool operator >(binaryop ob2)
{
if(x>ob2.x)
{
return true;
}
else{
return false;
}
}

void display()
{
cout<<c;
}

};
int main()
{
binaryop ob1,ob2;
binaryop ob3(50);
ob1=ob1+ob2; // ob1 is holding the value return by object
ob1.display();
if(ob2>ob3)
{
cout<<"greater";

}
else{
cout<<"less";
}
return 0;
}




member function require only one argument
but in friend function then we need 2 arguments.
