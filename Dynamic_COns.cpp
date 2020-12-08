// Using multiple constructors in the class
#include <iostream>

using namespace std;
class mulitple_con
{
int a,b,t; //private data members
char *name;
public:
mulitple_con() //default constructor
{

a=10;
b=20;
}

mulitple_con(int x,int y) //parametrized constructor
{

a=x;
b=y;
}

mulitple_con(mulitple_con &obj1, mulitple_con &obj2) //copy constructor
{
a=obj1.a; // 20
b=obj2.b; // 100
}
mulitple_con(int c) //dynamic constructor
{
name = new char[10];
name="MCA";
cout<<endl<<name;
t=c;
cout<<endl<<t;
}
void swapping()
{
cout<<endl<<"Before Swapping :"<<a<<"\t"<<b<<endl;
t=a;
a=b;
b=t;
cout<<endl<<"After Swapping :"<<a<<"\t"<<b<<endl;
cout<<a<<b;
}


};




int main()
{
mulitple_con con1; //calling default constructor
cout<<endl<<"Calling swapping method using default constructor"<<endl;
con1.swapping();
mulitple_con con2(100,600); //calling parameterized constructor
cout<<endl<<"Calling swapping method using parameterized constructor"<<endl;
con2.swapping();
mulitple_con con3(con1,con2); //calling copy constructor
cout<<endl<<"Calling swapping method using copy constructor"<<endl;
con3.swapping();
mulitple_con con4(100);
cout<<endl;

cout<<sizeof(con4);
return 0;
}
