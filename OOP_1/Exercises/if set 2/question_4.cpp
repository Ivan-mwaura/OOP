#include <iostream>

using namespace std;

int main()
{
    int num,ans;

    cout<<"Enter your value of X ->";
    cin>>num;

    if(num > 5)
    {
       ans = (4 * num * num * num ) + (2 *num ) - 6;

       cout<<"\nAnswer = "<<ans<<"\n\n";
    }
    else if( num < 5)
    {
        ans = (3 * num * num) -(4 * num) + 12;

        cout<<"\nAnswer = "<<ans<<"\n\n";

    }
    else if(num == 5)
    {
       ans = (6 * num) - 5;

        cout<<"\nAnswer = "<<ans<<"\n\n";
    }

    return 0;
}
