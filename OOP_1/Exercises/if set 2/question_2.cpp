#include<iostream>

using namespace std;

int main()
{
    int g_pay,tax_amt,net_sal;

    cout<<"Enter the gross salary -> ";
    cin>>g_pay;

    if(g_pay >= 20000)
    {
        tax_amt = g_pay * 0.15;
        net_sal = g_pay - tax_amt;

        cout<<"\nTax amount  = "<<tax_amt<<"\nNet salary = "<< net_sal<<"\n\n";
    }
    else if(g_pay >= 10000 && g_pay < 20000)
    {
        tax_amt = g_pay * 0.10;
        net_sal = g_pay - tax_amt;

        cout<<"\nTax amount  = "<<tax_amt<<"\nNet salary = "<< net_sal<<"\n\n";
    }
    else if ( g_pay > 1000)
    {
        tax_amt = g_pay * 0;
        net_sal = g_pay - tax_amt;

        cout<<"\nTax amount  = "<<tax_amt<<"\nNet salary = "<< net_sal<<"\n\n";
    }

}
