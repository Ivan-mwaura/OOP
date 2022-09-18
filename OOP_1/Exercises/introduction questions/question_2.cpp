#include<iostream>

using namespace std;

int main()
{
    double rad,area,perimeter;
    float pi = 3.142;

    cout<<"Enter the radius of the circle ->";
    cin>>rad;

    area = pi * rad * rad;
    perimeter = pi * rad;

    cout<< "\nThe area if the circle is ->"<<area<<"\n\nThe perimeter is ->"<<perimeter;

    return 0;
}
