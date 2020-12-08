#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file_ptr;
    string name,stri;
    int choice;
    int marks,reg;

    cout<<"************************Options************************";
    cout<<"\nPress 1 to Add data  \n";
    cout<<"\nPress 2 to Update data  \n";
    cout<<"\nPress 3 to Append data  \n";
    cout<<"\nPress 4 to Display data  \n";
    cin>>choice;
    //do
        switch(choice)
        {
            case 1:
                    file_ptr.open("Student_Details.txt",ios::out);
                    if(!file_ptr)
                    {
                        cout<<"****Error****";
                    }
                    else
                    {
                        cout<<"Student_Details.txt file is created";
                    }
                    cout<<"Enter your name : ";
                    cin>>name;
                    cout<<"Enter Registration No. : ";
                    cin>>reg;
                    cout<<"And also enter your marks : ";
                    cin>>marks;
                    file_ptr<<"Name : "<<name;
                    file_ptr<<"\nRegistration No. : "<<reg;
                    file_ptr<<"\nMarks : "<<marks;
                    file_ptr.close();
                    break;

            case 2:
                    file_ptr.open("Student_Details.txt",ios::ate);
                    if(!file_ptr)
                    {
                        cout<<"****Error****";
                    }
                    else
                    {
                        cout<<"Student_Details.txt file is created in Ate mode";
                    }
                    cout<<"\nEnter your name : ";
                    cin>>name;
                    cout<<"\nEnter Registration No. : ";
                    cin>>reg;
                    cout<<"And also enter your marks : ";
                    cin>>marks;
                    file_ptr<<"Name : "<<name;
                    file_ptr<<"Registration No. : "<<reg;
                    file_ptr<<"\nMarks : "<<marks;
                    file_ptr.close();
                    break;

            case 3:
                    file_ptr.open("Student_Details.txt",ios::app);
                    if(!file_ptr)
                    {
                        cout<<"****Error****";
                    }
                    else
                    {
                        cout<<"Student_Details.txt file is created in append mode";
                    }
                    file_ptr<<"\nName : "<<name;
                    file_ptr<<"\nRegistration No. : "<<reg;
                    file_ptr<<"\nMarks : "<<marks;

                    cout<<"Enter your name : ";
                    cin>>name;
                    cout<<"Enter Registration No. : ";
                    cin>>reg;
                    cout<<"And also enter your marks : ";
                    cin>>marks;
                    file_ptr<<"\nName : "<<name;
                    file_ptr<<"\nRegistration No. : "<<reg;
                    file_ptr<<"\nMarks : "<<marks;
                    file_ptr.close();
                    break;

            case 4:

                    file_ptr.open("Student_Details.txt",ios::in);
                    while(getline(file_ptr,stri))
                    {
                        cout<<endl;
                        cout<<stri;
                    }
                    file_ptr.close();
                    break;

            default:
                    cout<<"\n**************Invalid Option******************";
                    break;

    }

    return 0;
}
