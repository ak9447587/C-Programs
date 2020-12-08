/*Write a program to perform following:
 Implement an abstract class for furniture class and perform its functionality
 Implement the concept of virtual base classes to indicate its use.*/

 #include<iostream>           //Including Header files
 using namespace std;
 class Furniture              //Creating Furniture class
 {
 public:
    string color;
    int stock_chairs,stock_tables,stock_steel_chairs,stock_wooden_chairs,stock_wooden_tables,stock_steel_tables;  //data members
    virtual void show_details()=0;    //declaration of pure virtual function
 };
 class Chair:public Furniture           //Creating derived Chair class from base class furniture
 {
 public:

       Chair()                          //Default constructer
       {
           stock_chairs=30;
           stock_steel_chairs=20;
           stock_wooden_chairs=10;
           color="Brown";
       }
       void show_details()              //Defining pure virtual function for showing details about Chairs
       {
           cout<<endl<<"Chair Class "<<endl;
           cout<<"Total chairs : "<<stock_chairs;
           cout<<endl<<"Total steel chairs : "<<stock_steel_chairs;
           cout<<endl<<"Total wooden chairs : "<<stock_wooden_chairs;
           cout<<endl<<"Color : "<<color<<endl;

       }
 };
class Table:public Furniture
{
 public:
       Table()                         //Default constructor for table class
       {
           stock_tables=20;
           stock_wooden_tables=10;
           stock_steel_tables=10;
           color="whiteAsh";
       }
       void show_details()              //Redefinition of pure virtual function for showing details about Tables
       {
           cout<<endl<<"Table Class "<<endl;
           cout<<"Total tables : "<<stock_tables;
           cout<<endl<<"Total steel chairs : "<<stock_steel_tables;
           cout<<endl<<"Total wooden chairs : "<<stock_wooden_tables;
           cout<<endl<<"Color : "<<color<<endl;
           cout<<"\n********************************************************\n";
       }
 };
class Buy:public Chair,public Table     //Inheriting all members of Chair and Table class in derived Buy class
{
public:
    int woodchair,steelchair,woodtable,steeltable,no_chairs,no_tables,total;  //Data members
    int woodChair_price=3200,steelChair_price=5200,woodtable_price=10200,steeltable_price=15200;
    void select_items()           //function for choosing desired number of items
    {

        cout<<"\nNumber of steel chairs you want to purchase : ";
        cin>>steelchair;
        cout<<"Number of wooden chairs you want to purchase : ";
        cin>>woodchair;

        cout<<"Number of steel tables you want to purchase : ";
        cin>>steeltable;
        cout<<"Number of wooden tables you want to purchase : ";
        cin>>woodtable;
    }
    void bill()                   //Function for billing
    {
      total=((steeltable*steeltable_price)+(woodtable*woodtable_price)+(steelchair*steelChair_price)+(woodchair*woodChair_price));
      cout<<"\nTotal billing amount is : "<<total;
    }
    void show_details()         //It will display all purchased item and their quantity
    {
       cout<<endl<<"Total steel chairs purchased : "<<steelchair;
       cout<<endl<<"Total wooden chairs purchased : "<<woodchair;
       cout<<endl<<"Total steel tables purchased : "<<steeltable;
       cout<<endl<<"Total wooden tables purchased : "<<woodtable;
    }
 };
 int main()               //main function
 {
      Furniture *fur;     // Creating pointer of class Furniture
      Chair c;            //Creating object of Class Chair
      Table t;            //Creating object of Class Table
      Buy b;              //Creating object of Class Buy
      char go,choice;
      int select;
      do                  //Main menu
      {
          cout<<"*************************Furniture************************\n\n";

          cout<<endl<<"1).Check available stock ";
          cout<<endl<<"2).Purchase Furniture ";
          cout<<endl<<"3).Display Purchased items and their billing\n";
          cout<<endl<<"4).Exit()\n";
          cout<<"\nSelect any of the following options to perform various operations : \n";
          cin>>select;
          cout<<"********************************************************\n";
          switch(select)
            {
              case 1:
                      fur=&c;
                      fur->show_details();
                      fur=&t;
                      fur->show_details();
                      break;
              case 2:
                      b.select_items();
                      cout<<"\nGo for billing now : y/n ";
                      cin>>go;
                      if(go=='y')
                        b.bill();
                      break;
              case 3:
                      b.show_details();
                      b.bill();
                      break;
              case 4:
                      break;
              default:
                      cout<<"\nInvalid Option ";
            }
            cout<<endl<<"Do you want to try again : ";
            cin>>choice;
            cout<<endl<<endl;
      }while(choice=='Y' || choice=='y');
      return 0;
 }
