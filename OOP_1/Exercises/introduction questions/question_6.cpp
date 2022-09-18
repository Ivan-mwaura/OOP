#include<iostream>

using namespace std;

int main()
{
    int deg,fahr;

    cout<<"Enter the temperature in degree celcius ->";
    cin>>deg;

    fahr = (deg * 9/5) + 32;

    cout<<"\nThe temperature in degree celcius is -> "<<fahr<<" fahrenheits\n\n";

    return 0;
}
