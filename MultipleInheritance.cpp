#include<iostream>
using namespace std;
class MCA
{
    public:
        string name,sec;
        int reg_no;
        virtual void get_details()=0;
        friend void show_details();
        virtual void disp();
};
class Details: public MCA
{
    public:
        void get_details()
        {
            cout<<"Enter Name : ";
            cin>>name;
            cout<<endl<<"Enter your reg. no. : ";
            cin>>reg_no;

        }
};

class Show_Details:public MCA
{
public:
    MCA md;
    void get_details()
    {
         cout<<endl<<"Enter your sec. no. : ";
         cin>>sec;
    }
    void show_details()
    {
        cout<<endl<<"Name : "<<md.name;
        cout<<endl<<"Reg. No. : "<<md.reg_no;
        cout<<endl<<"Section : "<<md.sec;
    }
};
class Display:public virtual Show_Details,public virtual Details
{
public:

    void disp()
    {
        cout<<endl<<"Name : "<<name;
        cout<<endl<<"Reg. No. : "<<reg_no;
        cout<<endl<<"Section : "<<sec;
    }
};
int main()
{
    Display *dis;
    Details d;
    Show_Details s;
    dis=&s;
    dis->get_details();
    dis=&d;

    s.show_details();
    //dis->disp();
    return 0;
}






