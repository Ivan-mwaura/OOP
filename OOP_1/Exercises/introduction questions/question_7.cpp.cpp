#include<iostream>

using namespace std;

int main()
{
    double met,minut,hr,km,hours,dis,speed;

    cout<<"Enter the distance travelled in meters ->";
    cin>>met;
    cout<<"Enter the time used minutes ->";
    cin>>minut;

    dis = met / 100;
    hr = minut / 60;
    speed = dis * hr;

    cout << "\nThe speed is ->"<<speed<<"km|hr\n";

    return 0;
}
