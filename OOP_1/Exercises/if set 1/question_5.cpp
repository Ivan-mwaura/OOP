#include <iostream>

using namespace std;

int main()
{
    int num;

    cout<<"Enter a random number ->";
    cin>>num;

    if(num > 0)
    {
        cout<<"\nPOSITIVE!\n\n";
    }
    else if(num < 0)
    {
        cout<<"\nNEGATIVE!\n\n";
    }
    else if(num == 0)
    {
        cout<<"\nZERO!\n\n";
    }
    return 0;
}
