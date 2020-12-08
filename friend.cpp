// Friend Function Implementation

#include <iostream>                                     // include header file
using namespace std;
class D2010                                             // Declaring Class
{
     int marks,reg;                                     // Data members declaration as Private
     float percentage;                                  // By default its Private
     char name[20];
     char grad;
public:                                                 // Public Access Specifier

        void get_details()                              // For input details of Student
        {
                    cout<<"Enter registration number : ";
                    cin>>reg;
                    cout<<"Enter name: ";
                    cin>>name;
                    cout<<"Enter marks (out of 150): ";
                    cin>>marks;
        }

        void grade()                                      // Assigning grade on the basis of percentage
        {
            percentage=(marks*100)/150;
            cout<<endl<<"Percentage : "<<percentage<<"%";
            if(percentage > 80)
            {
                grad='A';

            }
            else if(percentage > 60 && percentage < 80)
            {
                grad='B';

            }
            else if(percentage > 40 && percentage < 60)
            {
                grad='C';

            }
            else
            {
                grad='F';
            }
        }

        friend void result(D2010);                     // Declaring Friend Function inside the class
                                                       // Here friend function will accept class object as argument
};
void result(D2010 d)                                   // Defining friend function
{

    cout<<endl<<"Name : "<<d.name;
    cout<<endl<<"Registration number : "<<d.reg;
    cout<<endl<<"Percentage : "<<d.percentage<<"%";
    if(d.grad=='F')
    {
        cout<<"\nFailed! Better luck next time";
    }
    else
    {
        cout<<"\nYou got "<<d.grad<<" grade";
    }
}

int main()                                              // main function where from actual program starts executing
{
    D2010 obj1;                                         // Creating object as "obj1" of class "D2010"
    obj1.get_details();                                 // Calling get_details() function by using class object
    obj1.grade();                                         // Calling grade() function by using class object
    result(obj1);           // Calling friend function without using class object but here i've passed class object
    return 0;
}
