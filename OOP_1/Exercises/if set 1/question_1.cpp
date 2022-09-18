#include <iostream>

using namespace std;

int main()
{
    int choice,bot;

    cout<<"************Jamal and Daughters Pub****************\n";
    cout<<"\n";
    cout<<" Beer Brand                    Price\n";
    cout<<"1)Tusker                       100/=\n";
    cout<<"2)Pilsner                       120/=\n";
    cout<<"3)Smirnoff Ice                  140/=\n";
    cout<<"White cap                       90/=\n";

    cout<<"\nEnter your choice ->";
    cin>>choice;
    cout<<"\nEnter how many bottles you want ->";
    cin>>bot;

     if(choice == 1)
     {
         cout<<"\n"<<bot<<" bottles of Tusker will cost you -> "<<bot * 100<<" Ksh";
     }
     else if(choice == 2)
     {
         cout<<"\n"<<bot<<"bottles of pilsner will cost you -> "<<bot * 120<< "Ksh";
     }
     else if(choice == 3)
     {
         cout<<"\n"<<bot<<"bottles of Smirnoff will cost you -> "<<bot * 140<<" Ksh";
     }
     else if(choice == 4)
     {
         cout<<"\n"<<bot<<"bottles of White cap will cost you -> "<<bot * 90 << "Ksh";
     }

     return 0;
}
