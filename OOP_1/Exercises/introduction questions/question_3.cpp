#include <iostream>

using namespace std;

int main()
{
    int len,wid,area,perimeter;

    cout<<"Enter the length ->";
    cin>>len;
    cout<<"Enter the width->";
    cin>>wid;

    area = len * wid;
    perimeter = ((2 * len) + (2 * wid));

    cout<<"\n\nThe area of the rectangle is ->"<<area<<"\n\nThe perimeter is ->"<<perimeter;

    return 0;
}
