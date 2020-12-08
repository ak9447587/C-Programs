#include <iostream>

using namespace std;

void sum(int a,int b)
{
int c=a+b;
cout<<"function 1 \t"<<c<<endl;
}

void sum(int a,int b)
{

cout<<"function 2 \t"<<a+b<<endl;

}

void sum(double x,double y)
{
double c=x+y;
cout<<"function 3 \t"<<c<<endl;
}

int sum(int p)
{
int q=p+p;
return q;
}
int main()
{

sum(10,20);
sum(1,2);
sum(8.5,9.2);
cout<<"function 4 \t"<<sum(5);
return 0;
}

mam as u said earlier that function with same name with same no. of arguments of same data type.... then why compiler not confusing with 1st function? why for 2nd one?
