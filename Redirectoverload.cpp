#include<iostream>
using namespace std;
class convert
{
int a,b;
public:

    void operator ->(convert x)
    {

        b=x->a;

    }
    void display()
    {

        cout<<a<<endl;
    }
};
int main()
{
    int a;
    a=30;
    convert obj,obj2;
    obj->obj2;
    obj.display();
    return 0;
}
