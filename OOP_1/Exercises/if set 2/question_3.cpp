#include<iostream>
using namespace std;
int main()
{
    double gross_pay,tax,net_pay,gender;

    cout<<"********GENDER******\n";
    cout<<"choice                gender\n";
    cout<<"1)                     Female\n";
    cout<<"2)                       Male\n";

    cout<<"\nSelect you gender ->";
    cin>>gender;

    cout<<"\nEnter the gross pay -> ";
    cin>>gross_pay;

    if (gender == 1 && gross_pay < 15000)
    {
        tax = gross_pay * 0.12;
        net_pay = gross_pay - tax;

        cout<<"\nNet pay = "<<net_pay<<"\n\n";
    }
    else if (gender == 1 && gross_pay >= 15000)
    {
        tax = gross_pay * 0.14;
        net_pay = gross_pay - tax;

        cout<<"\nNet pay = "<<net_pay<<"\n\n";
    }
    else if (gender == 2 && gross_pay < 14000)
    {
        tax = gross_pay * 0.13;
        net_pay = gross_pay - tax;

        cout<<"\nNet pay = "<<net_pay<<"\n\n";
    }
    else if(gender == 2 && gross_pay >= 14000)
    {
         tax = gross_pay * 0.15;
        net_pay = gross_pay - tax;

        cout<<"\nNet pay = "<<net_pay<<"\n\n";
    }
    return 0;

}
