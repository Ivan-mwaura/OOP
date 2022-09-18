#include<iostream>
using namespace std;

int main()
{
    float my_number;

    cout<<"Enter a number -> ";
    cin>>my_number;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(20);

    cout<<"\nThe number you entered was -> "<<my_number<<"\n\n";


    return 0;

}

