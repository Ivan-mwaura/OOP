 #include<iostream>

using namespace std;

int main()
{
    double grams,kgs,package,pack;

    cout<<"Enter the weight of the package ->";
    cin>>grams;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    kgs = grams/1000;
    pack = ((1000)/(grams * 1));

    cout<<"\nThe weight of the package is -> "<<kgs<<" kilograms"<<"\nIt takes "<<pack<<" Such packages to form one kilogram\n\n";

    return 0;
}
