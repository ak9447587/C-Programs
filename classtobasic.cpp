#include<iostream>
using namespace std;
class Class2Basic
{
int a;
public:
    Class2Basic(int x)
    {
        a=x;
    }
    operator=(int)
    {
        Class2Basic cb;
        cb.a=a*4;
        return cb;
    }
    void display()
    {
        cout<<"value is : "<<a;
    }
};
int main()
{
    int result,t=90;
    Class2Basic obj(t);
    result=obj;
    obj.display();
    return 0;
}
