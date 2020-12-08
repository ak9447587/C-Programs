#include<iostream>
using namespace std;
class Student
{
    int marks;
public:
    char name[20];
    int reg;
    char sec;
};
class Calculate:protected Student
{
public:
    void calcu()
    {
        int arr_mark[5],i,total=0;
        cout<<"Enter marks of 5 subjects : ";
        for(i=0;i<5;i++)
        {
            cin>>arr_mark[0];
            total=total+arr_mark[0];
        }
        if(total>90)
        {
            cout<<"A grade"<<endl;
        }
        else if(total>80 && total <90)
        {
            cout<<"B Grade"<<endl;
        }
        else if(total>70 && total <80)
        {
            cout<<"c Grade"<<endl;
        }
        else
        {
            cout<<"D Grade"<<endl;
        }


    }

};
class Accept:public Student
{
public:
    void get_details()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter reg. no : ";
        cin>>reg;
        cout<<"Enter sec : ";
        cin>>sec;
    }
};

int main()
{
    Accept a1;
    Calculate c1;
    a1.get_details();
    c1.calcu();
    return 0;
}
