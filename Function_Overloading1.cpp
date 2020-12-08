#include<iostream>
using namespace std;
void area(float r)
{
    float pi=3.14;
    cout<<"Area of Circle is "<<pi*r*r<<endl;
}
void area(int l,int b)
{
    cout<<"Area of Rectangle is "<<l*b;
}
int area(int sq)
{
    return sq*sq;
}
int area(int d)
{
    cout<<"Dev";//compiler will show ambiguous error
}
int main()
{

    float radius=5;
    area(radius);
    area(10,12);
    area(int dev);
    cout<<endl<<"Area of Square is "<<area(13);
    return 0;
}
