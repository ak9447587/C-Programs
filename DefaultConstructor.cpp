#include<iostream>
using namespace std;
class D2010
{
    string name;
    int reg_no;
    public:D2010()
    {
        name="Ashok";
        reg_no=429496728;
    }
    void disp()
    {
        D2010 d1;
        cout<<"Inside class"<<endl;
        cout<<"My name is : "<<d1.name<<endl;
        cout<<"Reg. No : "<<d1.reg_no<<endl;
    }
    friend void display();
};
void display()
    {
        D2010 d;
        cout<<"Outside class"<<endl;
        cout<<"My name is : "<<d.name<<endl;
        cout<<"Reg. No : "<<d.reg_no;
    }
int main()
{
    D2010 d;
    d.disp();
    display();
    return 0;
}
