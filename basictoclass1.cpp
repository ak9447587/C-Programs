#include<iostream>
using namespace std;
class student
{
int id;
public:
    student(int id1)
    {
        id=id1;
    }
    void display()
    {
        cout<<" Student Id is "<<id;
    }
};
class teacher
{
    int id;
public:
    teacher(int id2)
    {
        id=id2;
    }
    void show()
    {
        cout<<" Teacher Id is "<<id;
    }
};
int main()
{
    int stu_id,teach_id;
    cout<<"ENter teacher id : ";
    cin>>teach_id;
    cout<<"ENter student id : ";
    cin>>stu_id;
    student id(stu_id);
    teacher id1(teach_id);
    teach_id=stu_id;
    id.display();
    id1.show();
    return 0;
}
