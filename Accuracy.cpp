//Program to Solve Ambiguity in Multiple Inheritence
//Here i've calculated Accuracy of the model on predictive values of Predictive model.

#include<iostream>
using namespace std;

class Ambiguity                                     // Base Class
{
public:                                             // Public Access Specifier

    string model_name,model_desc;                   // Data member
    void model_detail()                             // Member Function for model details
    {
        cout<<"Enter model name : ";
        cin>>model_name;
        cout<<"Model for : ";
        cin>>model_desc;
    }
    void display()                                  // Member function for displaying model details
    {
        cout<<"\n************************************************************************************\n";
        cout<<"Model Name : "<<model_name;
        cout<<"\nModel Description : "<<model_desc;
        cout<<"\n************************************************************************************\n";
    }
};
class Ambiguity1                                      // Base Class
{
public:
    int yes,no,no_yes,yes_no,total;                   // data members
    void pred_values()                                // Member function for getting predictive values
    {
        cout<<"Enter total tuples or examples : ";
        cin>>total;
        cout<<"Enter 'yes' predictive values : ";
        cin>>yes;
        cout<<"Enter 'no' predictive values : ";
        cin>>no;
        cout<<"Enter 'no' predictive values that are actually 'yes' : ";
        cin>>no_yes;
        cout<<"Enter 'yes' predictive values that are actually 'no' : ";
        cin>>yes_no;
    }
    void display()                                         // Member function for displaying predictive values
    {
        cout<<"\n************************************************************************************\n";
        cout<<endl<<"Yes  : "<<yes<<"\t\tYes but Predicted No : "<<yes_no<<endl;
        cout<<endl<<"No  : "<<no<<"\t\tNo but Predicted Yes : "<<no_yes;
        cout<<"\n************************************************************************************\n";
    }
};
class RemoveAmbiguity: public Ambiguity,public Ambiguity1   // Derived Class from 2 Base classes with public derivation
{
public:                                                     // Public Access Specifier

    float accu;                                             //data members
    void accuracy()                                         // Member function for calculating accuracy of the model in percentage
    {
       accu=((yes+no)*100)/total;
    }

    void display()                                          // Member function for displaying Model Accuracy
    {
        Ambiguity::display();                       // Calling display() member fun of base class(Ambiguity)
                                                    // by using scope resolution operator ::
                                                    // so that ambiguity or conflict b/w two display functions may not occur
        Ambiguity1::display();                      // Calling display() member fun of base class(Ambiguity1) by using scope operator
        cout<<"\n\nAccuracy of this model is : "<<accu<<"%\n";
    }
};
int main()                   // main function
{
    RemoveAmbiguity r;      // object of derived class(RemoveAmbiguity) is created
    r.model_detail();       // Calling model_detail() member fun from base class(Ambiguity)
    r.pred_values();        // Calling model_detail() member fun from base class(Ambiguity1)
    r.accuracy();           // Calling accuracy() member fun from base class(Ambiguity)
    r.display();            // Calling display() member fun of derived class(RemoveAmbiguity)
    return 0;
}
