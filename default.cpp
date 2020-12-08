#include <iostream>

using namespace std;

void sum(int a,int b=100) //Using default arguments
{
int c=a+b;
cout<<"function 1 \t"<<c<<endl;
}

void sum(float a)
{
float b=a+a;
cout<<"function 2 \t"<<b<<endl;

}

void sum(double x,double y)
{
double c=x+y;
cout<<"function 3 \t"<<c<<endl;
}

int main()
{
float a=2.5;
sum(10);
sum(a);
sum(8.5,9.2);
return 0;
}
