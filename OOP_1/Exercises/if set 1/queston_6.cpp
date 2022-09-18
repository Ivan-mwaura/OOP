#include<iostream>

using namespace std;

int main()
{
    double x ,y;

    cout<<"Enter two random numbers ->";
    cin>>x>>y;

    if(x > y)
    {
        cout<<"\nQuotient = "<<x / y<<"\n\n";
    }
    else if (y > x)
    {
        cout<<"\nQuotient = "<<y / x<<"\n\n";
    }
    else if(y == 0 || x == 0)
    {
        cout<<"\n unperformable! PLEASE ENTER A VALID NUMBER !!\n";
    }
    return 0;
}
