#include <iostream>
using namespace std;
class MCA //abstract class
{

public:
int marks;

virtual void show()
{
marks=90;
cout<<marks;
}
virtual void display()=0; //pure virrtual

void show1();
};

void MCA :: show1()
{
cout<<"Using scope";
}



class BCA : public MCA //concret class
{
public:
void show()
{
marks=100;
cout<<marks;
}
void display()
{
cout<<"defined";
}

};



int main()
{
MCA *ob;
BCA ob1;
ob=&ob1;
ob->show();
ob1.display();
ob1.show1();
return 0;

}
