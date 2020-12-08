#include <iostream>

using namespace std;

class testing
{
int x,y,z;
public:
testing() //Default constructor
{
x=10;
y=50;
}

testing(int a,int b)
{
x=a;
y=b;
}

void sum()
{
z=x+y;
cout<<"Addition is \t"<<z;

}
};
int main()
{
testing obj; //calling default constructor
testing obj1(100,200); //Calling parametrized constructor
obj.sum();
obj1.sum();
return 0;
}
