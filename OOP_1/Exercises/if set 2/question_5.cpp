#include <iostream>

using namespace std;

int main()
{
    int m1,m2,m3,m4,m5,avg;

    cout<<"Enter marks for the five units \n";

    cout<<"\nunit 1 -> ";
    cin>>m1;
    cout<<"unit 2 -> ";
    cin>>m2;
    cout<<"unit 3 -> ";
    cin>>m3;
    cout<<"unit 4 -> ";
    cin>>m4;
    cout<<"unit 5 -> ";
    cin>>m5;

    avg = (m1 + m2 + m3 + m4 + m5) / 5;

    if( avg >= 75 && avg < 100 )
    {
        cout <<"\nYou got a DISTINCTION\n\n";
    }
    else if(avg >= 65 && avg < 75)
    {
        cout<<"\nYou got a CREDIT\n\n";
    }
    else if(avg >= 50 && avg < 65)
    {
        cout<<"\nYou got a PASS \n\n";
    }
    else
        cout<<"You got a FAIL";

    return 0;

}
