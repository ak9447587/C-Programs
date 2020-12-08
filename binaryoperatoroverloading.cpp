#include <iostream>

using namespace std;

class binaryop
{
int x=10,c=0;
public:
binaryop operator +(binaryop ob1)
{
binaryop ob;
ob.c=x+ob1.x;
return ob;
}
void display()
{
cout<<c;
}

};
int main()
{
binaryop ob1,ob2;
ob1=ob1+ob2; // ob1 is holding the value return by object
ob1.display();
return 0;
}
