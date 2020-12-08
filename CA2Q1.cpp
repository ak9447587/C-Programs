#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[20];
    string str,sec;         //Data Members
    int reg;
    ofstream fileptr;        // Creating object of ofstream class for output operation
    fileptr.open("StudentInfo.txt",ios::out);   // opening file in output mode
    if(!fileptr)
    {
        cout<<"Error";
    }
    else
        cout<<"StudentInfo.txt file created\n";
    cout<<"Enter Name : ";
    cin.getline(name,20);
    cout<<"Enter Section No. : ";
    cin>>sec;
    cout<<"Enter Registration No. : ";
    cin>>reg;
    fileptr<<"Name : "<<name<<endl;
    fileptr<<"Section No. : "<<sec<<endl;
    fileptr<<"Registration No. : "<<reg<<endl;
    fileptr.close();

    ifstream fileptr1;      // Creating object of ifstream class for input operation
    fileptr1.open("StudentInfo.txt",ios::in);   //opening file in input mode
    while(getline(fileptr1,str))            //Reading content of file sequentially using file pointer (fileptr1)
    {
        cout<<str<<endl;
    }
    fileptr1.close();           //Closing file
    fileptr1.open("StudentInfo.txt",ios::in);   // Opening file in input mode
    fileptr1.seekg(14);                         // Moved filepointer to 19th byte
    cout<<"\nStart reading file from 2nd line \n"; //Randomly accessing file for reading purpose by using seekg() function
    while(getline(fileptr1,str))
    {
        cout<<str<<endl;
    }
    fileptr1.close();
    return 0;
}
