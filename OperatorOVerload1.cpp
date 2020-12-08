#include <iostream>

using namespace std;

class overload
{
int a,b;
public:
void accept_data()
{
cout<<"Enter the value of a & b";
cin>>a>>b;

}

void display()
{

cout<<"Value of a and b is"<<a<<"\t"<<b<<endl;
}

void operator++() //Unary ++ overloaded
{
a=++a;
b=++b;
}

void operator--() //Unary -- overloaded
{
a=--a;
b=--b;

}

void operator !() //Unary ! operator overloading
{

a=!a;
}
void operator -()
{
a=-a;
b=-b;

}

};
int main()
{
overload obj;
obj.accept_data();
obj.display();
++obj; //Calling ++ operator function
obj.display();
--obj; //Calling -- operator function
obj.display();
!obj;
obj.display();
-obj;
obj.display();
return 0;
}
