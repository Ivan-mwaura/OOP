#include<iostream>

using namespace std;

int main()
{
    int base,hei,per,ar,hyp;

    cout<<"Enter the base -> ";
    cin>>base;
    cout<<"Enter the height ->";
    cin>>hei;
    cout<<"Enter the hypotenuse ->";
    cin>>hyp;

    per = base + hei + hyp;

    cout<<"\nThe area of the triangle is ->"<<ar<<"\n\nThe perimeter is ->"<<per<<"\n\n";

    return 0;
}
