#include<iostream>
using namespace std;
class convert
{
int a;
public:
    convert()
    {
        a=10;
    }
     convert(int x)
    {
        a=x;
    }
    void operator =(convert x)
    {

        a=x.a;
        cout<<"\nValue of a : "<<a<<endl;
    }
    void display()
    {

        cout<<a<<endl;
    }
};
int main()
{
    int a;
    convert obj,obj2(20);
    //obj2=obj;
    //obj2.display();
    obj=obj2;
    obj.display();
    return 0;
}
