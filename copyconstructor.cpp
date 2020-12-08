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

testing(testing &obj3)
{
x=obj3.x;
y=obj3.y;
}



void sum()
{
z=x+y;
cout<<"Addition is \t"<<z<<endl;

}
};
int main()
{
testing obj; //calling default constructor
testing obj1(100,200); //Calling parametrized constructor
testing obj2 = obj1; //calling copy constructor ==>1 way

testing obj3(obj); //Calling copy constructor ==>2nd way

obj.sum(); //60
obj1.sum(); //300
obj2.sum(); //300
obj3.sum(); //60
return 0;
}
