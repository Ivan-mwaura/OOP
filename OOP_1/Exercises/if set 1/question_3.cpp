#include<iostream>

using namespace std;

int main()
{
    double g_pay,tax_am,net_pay;


    cout<<"Enter the gross pay ->";
    cin>>g_pay;

    if(g_pay >40000)
    {
        tax_am = g_pay * 0.3;
        net_pay = g_pay - tax_am;

        cout<<"\nThe tax amount charged is ->"<<tax_am<<"\n";
        cout<<"\nThe Net pay is ->"<< net_pay<<"\n\n";
    }
    else if(g_pay >= 30000 && g_pay <40000)
    {
        tax_am = g_pay * 0.25;
        net_pay = g_pay - tax_am;

        cout<<"\nThe tax amount charged is ->"<<tax_am<<"\n";
        cout<<"\nThe Net pay is ->"<< net_pay<<"\n\n";
    }
     else if(g_pay >= 20000 && g_pay <30000)
    {
        tax_am = g_pay * 0.15;
        net_pay = g_pay - tax_am;

        cout<<"\nThe tax amount charged is ->"<<tax_am<<"\n";
        cout<<"\nThe Net pay is ->"<< net_pay<<"\n\n";
    }
     else if(g_pay >= 10000 && g_pay <20000)
    {
        tax_am = g_pay * 0.10;
        net_pay = g_pay - tax_am;

        cout<<"\nThe tax amount charged is ->"<<tax_am<<"\n";
        cout<<"\nThe Net pay is ->"<< net_pay<<"\n\n";
    }
     else if(g_pay < 10000)
    {
        tax_am = g_pay * 0;
        net_pay = g_pay - tax_am;

        cout<<"\nThe tax amount charged is ->"<<tax_am<<"\n";
        cout<<"\nThe Net pay is ->"<< net_pay<<"\n\n";
    }

    return 0;
}
