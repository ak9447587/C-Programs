#include<iostream>
using namespace std;
class Laptop
{
   protected:
        string name;
    int price;
    public:
        virtual void show_details()=0;
        virtual void customer_wants()
        {
            cout<<"Enter brand name : ";
            cin>>name;
        }

};
class Define:public Laptop
{
    int bud;
    string proc;
public:

    void show_details()
    {
        cout<<"Enter you budget : ";
        cin>>bud;
        price=bud;
        if(bud>50000)
        {
            proc="i7";
            //cin>>proc; //i7
        }
        else
            proc="i5";
    }
    void order()
    {
            cout<<"\nName : "<<name;
            cout<<endl<<"Price : "<<price;
            cout<<endl<<"Processor : "<<proc;
    }
};

int main()
{
    Laptop *lap;
    Define def;
    lap=&def;
    def.customer_wants();
    lap->show_details();
    def.order();
    return 0;
}
