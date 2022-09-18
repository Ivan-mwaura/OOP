#include <iostream>

using namespace std;

int main()
{
    int num_1,num_2,choice;

    cout<<"......OPERATORS AVAILABLE...........\n";
    cout<<"choice           operand\n";
    cout<<"1)                    +\n";
    cout<<"2)                    -\n";
    cout<<"3)                    *\n";
    cout<<"4)                    /\n";
    cout<<"5)                    %\n";

    cout<<"\nChoose your operator -> ";
    cin>>choice;
    cout<<"Enter two numbers -> ";
    cin >>num_1>>num_2;

   switch(choice)
   {
   case 1:
    cout<<"\nTheir sum is ->"<<num_1 + num_2<<"\n\n";
    break;
   case 2:
    cout<<"\nTheir difference is ->"<<num_1 - num_2<<"\n\n";
    break;
   case 3:
    cout<<"\nTheir product is ->"<<num_1 * num_1<<"\n\n";
    break;
   case 4:
    cout<<"\nThe quotient is ->"<<num_1 / num_2<<"\n\n";
    break;
   case 5:
     cout<<"Their percentage is ->"<<(num_1/num_2) *100<<"\n\n";
   default:
    cout<<"\nPlease enter a valid operator!!";
    }
   return 0;
}
