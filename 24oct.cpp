#include <iostream>
#include<fstream>
using namespace std;
class student
{
    int marks,roll;
    char name[10];
public:
    void getdata()
    {
        cout<<"Enter marks ";
        cin>>marks;
        cout<<endl;
        cout<<"Enter roll no ";
        cin>>roll;
        cout<<endl;
        cout<<"Enter name ";
        cin>>name;
        fstream file;
        file.open("24Oct.txt",ios::out);
        file<<"Marks is "<<"\t : "<<marks<<endl;
        file<<"Roll no is"<<"\t : "<<roll<<endl;
        file<<"Name is"<<"\t: "<<name<<endl;
        file.close();
        file.close();
    }
    void display()
    {
        fstream file;
        string str;
        file.open("24Oct.txt",ios::in);
        while(getline(file,str))
        {
            cout<<endl;
            file>>str;
            cout<<str;
            cout<<endl;
        }

    }


};
int main()
{
    student ob;
    ob.getdata();
    ob.display();
    return 0;
}
