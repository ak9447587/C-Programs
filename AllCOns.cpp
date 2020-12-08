#include <iostream>
using namespace std;
class All_con
{

public:
    int a,b,*value,j;
    All_con() //default
    {
        a=100;
        b=200;
    }

    All_con(int x,int y) //parameters
    {
        a=x;
        b=y;
    }

    All_con(All_con &o1, All_con &o2) //copy
    {
        a=o1.a;
        b=o2.b;
    }
    void Values()
    {
    cout<<"Values of a and b :"<<a<<"\t"<<b<<endl;
    }
    All_con(int c) //dynamic
    {
        value=new int;
        value=&c;

        cout<<endl<<"DYnamic cons "<<*value;

    }
    friend void data();

};

void data()
{
    All_con f;
    cout<<"Enter value of a and b ";
    cin>>f.a>>f.b;
}


int main()
{
    All_con c1;
    data();
    cout<<"Calling  default constructor"<<endl;
    c1.Values();
    All_con c2(23,43);
    cout<<"Calling parameterized constructor"<<endl;
    c2.Values();
    All_con c3(c1,c2); //calling copy constructor
    cout<<"Calling copy constructor"<<endl;
    c3.Values();
    All_con c4(1200); //Dynamic

return 0;
}
