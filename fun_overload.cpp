#include <iostream>
using namespace std;
class Fun_overload
{
public:
    int a,b,t;
    float c,d,te;
    char e,f,tem;
    void int_swap(int x,int y)
    {
        a=x;
        b=y;
        t=a;
        a=b;
        b=t;

        cout<<"Swapped  integer values are"<<a<<b;
    }

     void float_swap(float p,float q)
    {
        c=p;
        d=q;
        te=c;
        c=d;
        d=te;

        cout<<"Swapped floating values are"<<c<<d;
    }

     void char_swap(char g,char h)
    {
        e=g;
        f=h;
        tem=e;
        e=f;
        f=t;

        cout<<"Swapped char values are"<<e<<f;
    }


};


int main()
{
   Fun_overload f;
    f.int_swap(1,5);
    f.float_swap(1.3,53.4);
    f.char_swap('a','b');
return 0;
}
