#include <iostream>
#include<fstream> // importing header file
using namespace std;
class testing //class creating
{
public:
int marks,roll,reg; //data members of the class
string name;

void getdata() //accepting class data in member function
{
cout<<"Enter student details";
cin>>marks>>roll>>reg>>name;

}
void display() //display class data
{
cout<<"Name is \t"<<name<<endl;
cout<<"Roll is \t"<<roll<<endl;
cout<<"reg is \t"<<reg<<endl;
cout<<"marks is \t"<<marks<<endl;
}


};


int main()
{
fstream file; //creating object for fstream class
file.open("student.txt",ios::out); //opening file in write mode
testing obj; //class object
obj.getdata();//storing data in object
file.write((char*)&obj,sizeof(obj)); //writing data to a file
file.close(); //closing file

cout<<"Data is successfully saved"<<endl;

file.open("student.txt",ios::in);//opening file in reading mode
file.read((char*)&obj,sizeof(obj));//fetching data from file for reading
obj.display(); //display data
file.close(); //closing file
return 0;
}
