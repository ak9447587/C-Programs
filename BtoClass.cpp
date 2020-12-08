#include<iostream>
using namespace std;
class student
{
int marks;
public:

    student(int m)
    {
        marks=m;
    }
    void display()
    {
        cout<<"Marks : "<<marks;
    }
};
int main()
{
    int mark;
    cout<<"Enter your marks : ";
    cin>>mark;
    student stu=mark;
    stu.display();
    return 0;
}
