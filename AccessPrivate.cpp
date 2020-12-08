//Constructor overloading

#include <iostream>

using namespace std;

class testing
{
int x,y,z;
testing() //Default constructor
{
x=10;
y=50;
}

testing(int a,int b=500) //Constructor with default argument
{
x=a;
y=b;
}

testing(testing &obj3)
{
x=obj3.x;
y=obj3.y;
}

friend void sum();
};
void sum()
{
testing obj; //calling default constructor
testing obj1(100); //Calling parametrized constructor
testing obj2 = obj1; //calling copy constructor ==>1 way

testing obj3(obj); //Calling copy constructor ==>2nd way

obj.z=obj.x+obj.y;
cout<<"Addition is Using default constructor \t"<<obj.z<<endl; //60
obj1.z=obj1.x+obj1.y;
cout<<"Addition is using parametrized constructor\t"<<obj1.z<<endl; //60
obj2.z=obj2.x+obj2.y;
cout<<"Addition is using copy constructor(1)\t"<<obj2.z<<endl; //60
obj3.z=obj3.x+obj3.y;
cout<<"Addition is using copy constructor(2)\t"<<obj3.z<<endl; //60

}
int main()
{
sum(); //60
return 0;
}
