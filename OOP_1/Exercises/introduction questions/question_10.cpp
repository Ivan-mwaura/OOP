#include <iostream>

using namespace std;

int main()
{
    double age,i;

    cout<<"Enter your age ->";
    cin>>age;

    if(age >= 18)
        cout<<"\nYou can vote!\n\n";
    else
        cout<<"\nYou are too young to vote!\n\n";

    return 0;
}
