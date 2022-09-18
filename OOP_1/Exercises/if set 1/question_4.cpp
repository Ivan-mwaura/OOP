#include<iostream>

using namespace std;

int main()
{
    double x,y;

    cout<<"Enter two numbers ->";
    cin>>x>>y;

    if(x > y)
    {
        cout<<"\nThe difference between the two numbers is "<<x - y<<"\n\n";
    }
    else if(y > x)
    {
        cout<<"\nThe quotient between the two numbers is "<<y /x<<"\n\n";
    }
    return 0;

}
