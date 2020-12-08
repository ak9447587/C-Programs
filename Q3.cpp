#include<iostream>
using namespace std;
class Student                          // Creating Student Class
{
    public:
        string name,sec;               // Public Data Members
        int marks,reg,code;
        void get_details()                     // Function for getting user details
        {
            cout<<"Enter Name : ";
            cin>>name;
            cout<<"\nEnter Sec : ";
            cin>>sec;
            cout<<"\nEnter Registration Number : ";
            cin>>reg;
            cout<<"\nEnter Subject Code : ";
            cin>>code;
            cout<<"\nEnter Current Marks : ";
            cin>>marks;
        }
        virtual void Result()          // Virtual Function definition
        {
            cout<<endl<<"Name : "<<name;
            cout<<endl<<"Sec : "<<sec;
            cout<<endl<<"Registration : "<<reg;
            cout<<endl<<"Subject code : "<<code;
            cout<<endl<<"Marks till MTE: "<<marks;
        }
};
class EndTerm:public Student
{
public:
        int ETE_Marks=47;   //Initializing ETE marks
        void Result()
        {
            cout<<endl<<"Name : "<<name;
            cout<<endl<<"Sec : "<<sec;
            cout<<endl<<"Registration : "<<reg;
            cout<<endl<<"Subject code : "<<code;
            cout<<endl<<"Total Marks : "<<marks+ETE_Marks;    // Updating Marks
        }
};
int main()
{
    Student *stu;           // Creating pointer object which is pointing to Class Student
    EndTerm ete;            // Creating object of derived class
    stu=&ete;               // Now, stu is pointing to Class EndTerm's object
    ete.get_details();      // Calling get_details function for input
    stu->Result();          // Calling Result Function of Derived Class i.e., EndTerm class by using arrow operator
    return 0;
}

