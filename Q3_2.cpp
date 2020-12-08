#include<iostream>0
using namespace std;
class Company                          // Creating Student Class
{
    public:
        string emp_name,Manager_Name,branch;               // Public Data Members
        int id;
        void get_details()                     // Function for getting user details
        {
            cout<<"Enter Name : ";
            cin>>emp_name;
            cout<<"\nEnter ID : ";
            cin>>id;
            cout<<"\nEnter branch name : ";
            cin>>branch;
            cout<<"\nEnter Manager Name : ";
            cin>>Manager_Name;
        }
        virtual void Report()=0;          // Pure Virtual Function declaration

};
class Company1:public Company
{
public:
        string New_Manager="Raj";
        void Report()                      // Definition of Pure Virtual Function
        {
            cout<<endl<<"Employee Name : "<<emp_name;
            cout<<endl<<"Employee ID : "<<id;
            cout<<endl<<"Branch name : "<<branch;
            cout<<endl<<"Branch Manager : "<<New_Manager;  // Change manager
        }
};
class Company2:public Company
{
public:
        string New_Manager="Gourav";
        void Report()                      // Redefinition of Pure Virtual Function
        {
            cout<<endl<<"Employee Name : "<<emp_name;
            cout<<endl<<"Employee ID : "<<id;
            cout<<endl<<"Branch name : "<<branch;
            cout<<endl<<"Branch Manager : "<<New_Manager;  // Change manager
        }
};
int main()
{
    Company *comp;             // Creating pointer object which is pointing to Class Student
    Company1 comp1;            // Creating object of derived class Cpmpany1
    Company2 comp2;            // Creating object of derived class Cpmpany2
    comp=&comp1;               // Now, comp is pointing to Class Comapany1's object
    comp=&comp2;               // And, also comp is pointing to Class Comapany2's object
    comp2.get_details();       // Calling get_details function for input
    comp->Report();            // Calling Report Function of Derived Class using arrow operator
    return 0;
}

