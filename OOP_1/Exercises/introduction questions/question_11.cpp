#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num,sq,cb,cbrot;

    cout<<"Enter a random number ->";
    cin>>num;

    sq = num * num;
    cb = num * num *num;
    cbrot = cbrt(num);

    cout<<"\nThe square root is -> "<< sq<<"\n\n" <<"The cube is "<<cb<<"\n\n"<<"The cube root is "<<cbrot<<"\n\n";

    return 0;
}
