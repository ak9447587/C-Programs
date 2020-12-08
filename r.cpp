#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    cout<<"ID"<<setw(15)<<"Subject Code"<<setw(15)<<"Subject Name"<<endl;
    cout<<setw(2)<<setfill('=')<<""<<setw(3)<<setfill(' ')<<""<<setw(12)<<setfill('=')<<""<<setw(3)<<setfill(' ')<<""<<setw(12)<<setfill('=')<<""<<endl;
    cout<<"101"<<setw(9)<<setfill(' ')<<"CAP445"<<setw(21)<<setfill(' ')<<"OOP using C++";
    return 0;
}
