#include <iostream>

using namespace std;

int main()
{
    double num_1,num_2,opera;

    cout<<"......OPERATORS AVAILABLE...........\n";
    cout<<"choice           operand\n";
    cout<<"1)                    +\n";
    cout<<"2)                    -\n";
    cout<<"3)                    *\n";
    cout<<"4)                    /\n";
    cout<<"5)                    %\n";

    cout<<"\nChoose your operator -> ";
    cin>>opera;
    cout<<"Enter two numbers -> ";
    cin >>num_1>>num_2;

    if(opera == 1)
    {
        cout<<"\nTheir sum is ->"<<num_1 + num_2<<"\n\n";
    }
    else if(opera == 2)
    {
        cout<<"\nTheir difference is ->"<<num_1 - num_2<<"\n\n";
    }
    else if(opera == 3)
    {
        cout<<"\nTheir product is ->"<<num_1 * num_1<<"\n\n";
    }
    else if(opera == 4)
    {
        cout<<"\nThe quotient is ->"<<num_1 / num_2<<"\n\n";
    }
    else if(opera == 5)
    {
        cout<<"Their percentage is ->"<<(num_1/num_2) *100<<"\n\n";
    }
    return 0;
}
