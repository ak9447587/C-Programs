// This program will help me out to find Factorial,fibonacci series(with sum) & Prime number

#include<iostream>                                  // includeing header file
using namespace std;
class Factorial                                     // Declaring factorial class
{
    int num,temp;
    long int fact;                                  //Private data members
public:
    void get_number()                               // Defining factorial function for taking input
    {
        cout<<endl<<"*****************************\n";
        cout<<"Enter any number for checking factorial : ";
        cin>>num;
        temp=num;
    }
    void cal_fact()                                 // Function for calculating factorial
    {
        fact=1;
        for(;temp>0;temp--)
        {
            fact=fact*temp;
        }
    }
    void display_fact()                             // this will displays factorial of number
    {
        cout<<endl<<"Factorial of "<<num<<" is "<<fact;
        cout<<endl<<"\n****************************\n";
    }
};
class Fibonacci                                     // Declaring Fibonacci class
{
    int limit,series[20],first,second,j,i,next,sum; //private data members

public:                                             //public access specifier

    void get_limit()                                //function for getting inputs from user
    {
        cout<<endl<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
        cout<<"Enter total number of elements, that you want to see in fibonacci series : ";
        cin>>limit;

    }
    void cal_fibo()                                  // Function for calculating fibonacci series
    {
       first=1,second=1;                             // 1st & 2nd value is already set
       sum=first+second;                             // including sum
       for(i=limit-2,j=0;i>0;i--,j++)                // this series will start from 3rd element
       {                                             // bcoz, 1st & 2nd values will remain same for
           series[j]=first;                          // all possible ranges greater than 2
           series[j+1]=second;
           series[j+2]=(first+second);
           next=first+second;
           sum=sum+next;                            // sum variable will store every single element
           first=second;                            // of the series
           second=next;
       }

    }
    void display_fibo_result()                      // this function will display fibo series and its sum
    {
       cout<<"\nSeries is : ";
       for(i=0;i<limit;i++)
       {
           cout<<series[i]<<" ";
       }
       cout<<"\nSum of this series is : "<<sum;
       cout<<endl<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    }
};
class Prime                                         // Declaring Prime class
{
    int num,i;                                      // Data members
    char choice;
public:
    void get_number()                               //Function for getting user input
    {
        cout<<endl<<"\n###################################################################\n\n";
        cout<<"Enter number for checking whether it is prime number or not : ";
        cin>>num;
    }
    void check_prime()                              // this function will whether number input number
    {                                               // is prime number or not.
        do{


                for(i=2;i<=num;i++)
                {
                    if(num%i==0)                    // if number get fully divisible by a loop number(i)
                    {                               // and gives output as zero then control will
                        break;                      // come out of the loop
                    }
                }
                if(num==i)                          // prime number is only divisible by its own number
                {                                   // so i've set situation in such a way that
                     cout<<num<<" is a prime number";       //at the end i (variable) will be eq to num
                }
                else
                {
                     cout<<num<<" is not a prime number";
                }
                cout<<"\nDo you want to continue 'y/n' : ";
                cin>>choice;
                if(choice=='y')
                {
                    cout<<"Enter number for checking whether it is prime number or not : ";
                    cin>>num;
                }


        }while(choice=='y');
        cout<<endl<<"\n###################################################################\n";

    }
};
class Result:public Factorial,public Fibonacci,public Prime   // all above 3 classes inherited publicly
{
    public:
    void display()                                      // this function will display all results
    {                                                   // of previous classes
        Factorial::get_number();                        // to remove ambiguity i've used :: scope operator
        cal_fact();                                     //calling cal_fact() for calculating factorial
        display_fact();                                 //calling this fun for displaying factorial

        get_limit();                                    //calling get_limit() for getting user input
        cal_fibo();                                     //calling cal_fibo() for calculating fibo series
        display_fibo_result();                          //calling this fun for displaying series & sum

        Prime::get_number();                             //calling get_number() with :: operator
                                                             //  for getting user input an
        check_prime();                                  //calling check_prime fun for checking prime num
                                                        // and for displaying output
    }

};
int main()                          // main function
{
    Result r1;                      // Creating object as "r" of class "Result"
    r1.display();                   // Calling display funtion for getting inputs & result using r1 object
    return 0;
}
