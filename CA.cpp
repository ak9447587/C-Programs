// This program will help company manager to get full details about the employees who are max paid in their respective department

#include <iostream>                                               // include header file
using namespace std;
class XYZ                                                         // Declaring Base Class with name XYZ
{
protected:
    string name[20],department[4];                                // For storing department's name and employees name
    int id[20];                                                   // employee id array.
    int greatest[4];
    int prod_sal[5],sale_sal[5],finance_sal[5],marketing_sal[5];  // for storing salaries of different departments

public:
    int i,j;                                                      //variables for loops iteration
    void emp_details()                                            // declaring & defining function for getting employee details
    {
          cout<<"***************************** Enter all department names *****************************"<<endl<<endl;
          for(i=0;i<4;i++)
          {
              cin>>department[i];
          }
          cout<<endl<<"*****************************Enter employees details for Productions Department *****************************\n"<<endl;
          for(i=0;i<5;i++)
          {
              cout<<endl<<"Enter employee name  : ";
              cin>>name[i];
              cout<<"Enter employee ID : ";
              cin>>id[i];
              cout<<"Enter employee salary : ";
              cin>>prod_sal[i];
           }
          cout<<endl<<"*****************************Enter employees details for Sales Department********************************\n"<<endl;
          for(i=0;i<5;i++)
          {
              cout<<endl<<"Enter employee name  : ";
              cin>>name[i+5];
              cout<<"Enter employee ID : ";
              cin>>id[i+5];
              cout<<"Enter employee salary : ";
              cin>>sale_sal[i];
          }
          cout<<endl<<"*****************************Enter employees details for Finance Department *****************************\n";
          for(i=0;i<5;i++)
          {
              cout<<endl<<"Enter employee name  : ";
              cin>>name[i+10];
              cout<<"Enter employee ID : ";
              cin>>id[i+10];
              cout<<"Enter employee salary : ";
              cin>>finance_sal[i];
          }
           cout<<endl<<"***************************** Enter employees details for Marketing Department *****************************\n";
          for(i=0;i<5;i++)
          {
              cout<<endl<<"Enter employee name  : ";
              cin>>name[i+15];
              cout<<"Enter employee ID : ";
              cin>>id[i+15];
              cout<<"Enter employee salary : ";
              cin>>marketing_sal[i];
          }
    }
};

class Manager: public XYZ                                         // Declaring Declared Class with name Manager from Base class XYZ with public derivation
{
    int choice,employee_id,j;
    string dept_name;
    int greatest_salary_production=0;                             //*************************************
    int greatest_salary_sales=0;                                  //   arrays for calculating max salary
    int greatest_salary_finance=0;
    int greatest_salary_marketing=0;                              //*************************************
    string highly_paid_employee[5];                               // This array for storing emp names of max paid salary
    int highly_paid_employee_id[5];                               // This array for storing emp ID of max paid salary
public:

    void calculate_production_employee_sal()          // This function will help me to get max paid employee from prod dept.
    {
        for(i=0;i<5;i++)
        {
            if(greatest_salary_production<prod_sal[i])
             {
                 greatest_salary_production=prod_sal[i];
                 highly_paid_employee[0]=name[i];
                 highly_paid_employee_id[0]=id[i];
             }

        }
        greatest[0]=greatest_salary_production;
    }
    void calculate_sale_employee_sal()
    {
        for(i=0;i<5;i++)
        {
            if(greatest_salary_sales<sale_sal[i])
             {

                 greatest_salary_sales=sale_sal[i];
                 highly_paid_employee[1]=name[i+5];
                 highly_paid_employee_id[1]=id[i+5];
             }
        }
        greatest[1]=greatest_salary_sales;
    }
    void calculate_finance_employee_sal()
    {
        for(i=0;i<5;i++)
        {
            if(greatest_salary_finance<finance_sal[i])
             {

                 greatest_salary_finance=finance_sal[i];
                 highly_paid_employee[2]=name[i+10];
                 highly_paid_employee_id[2]=id[i+10];
             }

        }
        greatest[2]=greatest_salary_finance;
    }
    void calculate_marketing_employee_sal()
    {
        for(i=0;i<5;i++)
        {
            if(greatest_salary_marketing<marketing_sal[i])
             {

                 greatest_salary_marketing=marketing_sal[i];
                 highly_paid_employee[3]=name[i+15];
                 highly_paid_employee_id[3]=id[i+15];
             }
        }
        greatest[3]=greatest_salary_marketing;
    }
    void display()                      // declaring and defining display function for displaying max paid employees dept wise
    {
        cout<<"\n\n***************************** Hello Manager Ashok, we have set up employee data for you *****************************";

        cout<<"\n\t\t---->Press 1 for checking max paid salary of particular employee  by Department\n";
        cin>>choice;
        do
        {

                  if(choice == 1)
                  {
                    cout<<"\nEnter employee department 'Production','Sales','Finance','Marketing' for getting max paid employee information: ";
                    cin>>dept_name;
                    for(i=0;i<4;i++)
                    {
                        if(dept_name == department[i])
                        {
                            cout<<endl<<"***************************************";
                            cout<<endl<<"Name : "<<highly_paid_employee[i];
                            cout<<endl<<"ID : "<<highly_paid_employee_id[i];
                            cout<<endl<<"Salary : "<<greatest[i];
                            cout<<endl<<"***************************************";
                        }
                     }
                   }
                  cout<<"\n\t\t---->Press 1 for checking again max paid salary of particular employee  by Department\n";
                  cout<<"\t\t---->Press any other key for exit\n";
                  cin>>choice;
        }while(choice==1);
    }
};
int main()
{
    Manager m;                             // Creating object as "m" of class "Manager"
    m.emp_details();                       // Calling funtion for getting details of emp by using object
    m.calculate_production_employee_sal(); // Calling this function for looking max salary of Production Dept. employee
    m.calculate_sale_employee_sal();
    m.calculate_finance_employee_sal();
    m.calculate_marketing_employee_sal();
    m.display();                           // For displaying max paid employess from different departments.
    return 0;
}
