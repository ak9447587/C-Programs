/* C++ Program to enter Student details using Hierarchical Inheritance */

#include<iostream>
using namespace std;

const int len = 20 ;

class student // Base class
{
    char F_name[len];
char L_name[len];
int age;
int roll_no ;
public:

void Enter_data(void)
{
cout << "\n\t Enter the first name: ";
cin >> F_name ;
cout << "\t Enter the second name: ";
cin >> L_name ;
cout << "\t Enter the age: ";
cin >> age ;
cout << "\t Enter the roll_no: ";
cin >> roll_no ;
}
void Display_data(void)
{
cout << "\n\t First Name = " << F_name ;
cout << "\n\t Last Name = " << L_name ;
cout << "\n\t Age = " << age ;
cout << "\n\t Roll Number = " << roll_no ;
}
};

class arts : private student
{
private:
char asub1[len] ;
char asub2[len] ;
char asub3[len] ;
public:
void Enter_data(void)
{
student :: Enter_data( );
cout << "\t Enter the subject1 of the arts student: ";
cin >> asub1 ;
cout << "\t Enter the subject2 of the arts student: ";
cin >> asub2 ;
cout << "\t Enter the subject3 of the arts student: ";
cin >> asub3 ;
}
void Display_data(void)
{
student :: Display_data( );
cout << "\n\t Subject1 of the arts student = " << asub1 ;
cout << "\n\t Subject2 of the arts student = " << asub2 ;
cout << "\n\t Subject3 of the arts student = " << asub3 ;
}
};

class science : private student
{
private:
char ssub1[len] ;
char ssub2[len] ;
char ssub3[len] ;
public:
void Enter_data(void)
{
student :: Enter_data( );
cout << "\t Enter the subject1 of the science student: ";
cin >> ssub1;
cout << "\t Enter the subject2 of the science student: ";
cin >> ssub2;
cout << "\t Enter the subject3 of the science student: ";
cin >> ssub3;
}
void Display_data(void)
{
student :: Display_data( );
cout << "\n\t Subject1 of the science student = " << ssub1 ;
cout << "\n\t Subject2 of the science student = " << ssub2 ;
cout << "\n\t Subject3 of the science student = " << ssub3 ;
}
};
class medical : private student
{
private:
char msub1[len] ;
char msub2[len] ;
char msub3[len] ;
public:
void Enter_data(void)
{
student :: Enter_data( );
cout << "\t Enter the subject1 of the medical student: ";
cin >> msub1;
cout << "\t Enter the subject2 of the medical student: ";
cin >> msub2;
cout << "\t Enter the subject3 of the medical student: ";
cin >> msub3;
}
void Display_data(void)
{
student :: Display_data( );
cout << "\n\t Subject1 of the medical student = " << msub1 ;
cout << "\n\t Subject2 of the medical student = " << msub2 ;
cout << "\n\t Subject3 of the medical student = " << msub3 ;
}
};


class commerce : private student
{
private:
char csub1[len];
char csub2[len];
char csub3[len];
public:
void Enter_data(void)
{
student :: Enter_data( );
cout << "\t Enter the subject1 of the commerce student: ";
cin >> csub1;
cout << "\t Enter the subject2 of the commerce student: ";
cin >> csub2 ;
cout << "\t Enter the subject3 of the commerce student: ";
cin >> csub3 ;
}
void Display_data(void)
{
student :: Display_data( );
cout << "\n\t Subject1 of the commerce student = " << csub1 ;
cout << "\n\t Subject2 of the commerce student = " << csub2 ;
cout << "\n\t Subject3 of the commerce student = " << csub3 ;
}
};

class music : private student
{
private:
char tsub1[len] ;
char tsub2[len] ;
char tsub3[len] ;
public:
void Enter_data(void)
{
student :: Enter_data( );
cout << "\t Enter the subject1 of the music student: ";
cin >> tsub1;
cout << "\t Enter the subject2 of the music student: ";
cin >> tsub2;
cout << "\t Enter the subject3 of the music student: ";
cin >> tsub3;
}
void Display_data(void)
{
student :: Display_data( );
cout << "\n\t Subject1 of the music student = " << tsub1 ;
cout << "\n\t Subject2 of the music student = " << tsub2 ;
cout << "\n\t Subject3 of the music student = " << tsub3 ;
}
};

int main()
{
arts a ;
cout << "\n Entering details of the arts student\n" ;
a.Enter_data( );
cout << "\n Displaying the details of the arts student\n" ;
a.Display_data( );
science s ;
cout << "\n\n Entering details of the science student\n" ;
s.Enter_data( );
cout << "\n Displaying the details of the science student\n" ;
s.Display_data( );
medical m;
cout << "\n Entering details of the medical student\n" ;
m.Enter_data();
cout << "\n Displaying the details of the medical student\n" ;
m.Display_data();
commerce c ;
cout << "\n\n Entering details of the commerce student\n" ;
c.Enter_data( );
cout << "\n Displaying the details of the commerce student\n";
c.Display_data( );
music t;
cout << "\n Entering details of the MUSIC student\n" ;
t.Enter_data();
cout << "\n Displaying the details of the MUSIC student\n" ;
t.Display_data();

return 0;
}
