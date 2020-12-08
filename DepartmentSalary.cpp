#include <iostream>
using namespace std;
class xyz
{

public:
    int i;
    int greatest_salary[5]={0};
    int salary_production[5];
    int salary_marketing[5];
    char finance_dept[20],marketing_dept[20],production_dept[20],sales_dept[20];
    string department[4];
    int salary_finance[5];
    int salary_sales[5];
    void get_data()
    {
                cout<<"Enter Department Names : ";
                for(i=0;i<4;i++)
                {
                    cin>>department[i];
                }
                cout<<"Enter salary for finance department : ";
                for(i=0;i<5;i++)
                {
                    cin>>salary_finance[i];

                }
                cout<<"Enter salary  for marketing department : ";
                for(i=0;i<5;i++)
                {
                    cin>>salary_marketing[i];
                }

                cout<<"Enter salary  for production department : ";
                for(i=0;i<5;i++)
                {
                    cin>>salary_production[i];
                }

                cout<<"Enter salary  for sales department : ";
                for(i=0;i<5;i++)
                {
                    cin>>salary_sales[i];

                }

    }
    void calculate_salary()
    {
        for(i=0;i<5;i++)
        {
            if(salary_finance[i]>greatest_salary[0])
            {
                greatest_salary[0]=salary_finance[i];
            }

        }
        for(int i=0;i<5;i++)
        {
            if(salary_marketing[i]>greatest_salary[1])
            {
                greatest_salary[1]=salary_marketing[i];
            }

        }
        for(int i=0;i<5;i++)
        {
            if(salary_production[i]>greatest_salary[2])
            {
                greatest_salary[2]=salary_production[i];
            }

        }
        for(int i=0;i<5;i++)
        {
            if(salary_sales[i]>greatest_salary[3])
            {
                greatest_salary[3]=salary_sales[i];
            }
        }
    }
    void display()
    {
        for(i=0;i<4;i++)
        {
            cout<<"Greatest salary from department "<<department[i]<<" is "<<greatest_salary[i]<<endl;
        }
    }
};
int main()
{
    xyz x;
    x.get_data();
    x.calculate_salary();
    x.display();
return 0;
}
