//booking of railway
#include<iostream>      //Including header files
#include<fstream>
using namespace std;
class Railway_Reservation       //Creating Railway_Reservation class
{
public:
    string traveller_name[5],gender[5],t_name[5],Brdg_point[5],dest[5],departure_dt[5],s;  //Data Members
    int age[5],fare[5],id[5],i,j,k;
    char choice;
    void get_details()          // Function for taking information from user
    {
        i=0;
        do
        {
            cout<<"\n****************************************************************\n";
            cout<<"ID : "; cin>>id[i];
            cout<<"Traveller Name : "; cin>>traveller_name[i];
            cout<<"Gender : "; cin>>gender[i];
            cout<<"Train Name : "; cin>>t_name[i];
            cout<<"Boarding Point : "; cin>>Brdg_point[i];
            cout<<"Destination Point : "; cin>>dest[i];
            cout<<"Departure Date : "; cin>>departure_dt[i];
            cout<<"Fare : "; cin>>fare[i];

            cout<<"Do you want to add more user : "; cin>>choice;
            cout<<"\n**************************************************************\n";
            i++;
            j=i;
        }while(choice=='y' || choice=='Y');
    }
    void store()                // Function for stroring data into the file
    {
        fstream railPtr;   //creating object for fstream class
        railPtr.open("UserData.txt",ios::out); //Opening file in output mode
        if(!railPtr)                   //Checking whether railPtr associated with file or not
        {
            cout<<"Error : Unable to open file";
        }
        railPtr<<"ID\tTraveller Name\tGender\tTrain Name\tBoarding Point\tDestination Point\tDeptarture Date \t\tFare\n";
        railPtr<<"\n****************************************************************************************************************************************************************\n";
        for(i=0;i<j;i++)
        {
            railPtr<<id[i];
            railPtr<<"\t"<<traveller_name[i];       //Adding data into the file
            railPtr<<"\t\t"<<gender[i];
            railPtr<<"\t"<<t_name[i];
            railPtr<<"\t\t"<<Brdg_point[i];
            railPtr<<"\t\t"<<dest[i];
            railPtr<<"\t\t\t"<<departure_dt[i];
            railPtr<<"\t\t\t"<<fare[i]<<endl;
        }
        railPtr.close();    //Closing file
    }
    void Display()                  // this function will display content of file
    {
        string str;
        ifstream rail1;      // Creating object of ifstream class for input operation
        rail1.open("UserData.txt",ios::in);   //opening file in input mode
        while(getline(rail1,str))            //Reading content of file sequentially using file pointer (rail1Ptr)
        {
            cout<<str<<endl;
        }
        rail1.close();
    }
    void add()                  //Function for Adding new data in existing file
    {
        get_details();
       // j=0;
        fstream railPtr;   //creating object for fstream class
        railPtr.open("UserData.txt",ios::app); //Opening file in output mode
        if(!railPtr)                   //Checking whether primeptr associated with file or not
        {
            cout<<"Error : Unable to open file";
        }

        for(i=0;i<j;i++)
        {

            railPtr<<id[i];
            railPtr<<"\t"<<traveller_name[i];
            railPtr<<"\t\t"<<gender[i];
            railPtr<<"\t"<<t_name[i];
            railPtr<<"\t\t"<<Brdg_point[i];
            railPtr<<"\t\t"<<dest[i];

            railPtr<<"\t\t\t"<<departure_dt[i];
            railPtr<<"\t\t\t\t"<<fare[i]<<endl;
        }
        cout<<"\nSuccessfullly file updated\n";
        railPtr.close();        //Closing File
    }
};
int main()
{
    Railway_Reservation Rail; //Creating object of class Railway_Reservation
    char choice;
    int ch;
    cout<<"*****************************Ticket Reservation Program***********************************\n";
    do
    {
        cout<<"**************Main Menu**************";  //Menu for performing various operations
        cout<<"\n1). Book Ticket";
        cout<<"\n2). Display users who booked ticket";
        cout<<"\n3). Book 2nd Ticket";
        cout<<"\n4). Exit";
        cout<<"\nChoose any of the above 4 options : "; cin>>ch;
        cout<<"\n****************************************************************\n";
        switch(ch)
        {
        case 1:
                Rail.get_details();
                Rail.store();
                break;
        case 2:
            Rail.Display();
            break;
        case 3:
            Rail.add();
            break;
        case 4:
            break;
        default:
            cout<<"\nInvalid Option ";
        }
        cout<<endl<<"Do you want to try again : ";
        cin>>choice;
        cout<<endl;
    }while(choice=='Y' || choice=='y');
    return 0;
}
