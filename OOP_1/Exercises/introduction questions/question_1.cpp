#include<iostream>

using namespace std;

int main()
{
    float x,y,sum,avg,product;

    cout<<"Enter two numbers ->";
    cin>>x>>y;

    sum = x + y;
    product = x*y;
    avg = ((x + y)/2);

    cout<<"\nThe sum is "<<sum<<"\n\n"<<"The product is ->"<<product<<"\n\n"<<"The average of the two numbers is ->"<<avg<<"\n\n";

    return 0;

}
