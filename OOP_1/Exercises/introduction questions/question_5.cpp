#include<iostream>

using namespace std;

int main()
{
    int met,cent,conv;

    cout<<"Enter the measurement in centimeters ->";
    cin>>cent;

    met = cent /100;

    cout<<"\n"<<cent<<"cm"<<" = "<<met<<"m"<<"\n\n";

    return 0;
}
