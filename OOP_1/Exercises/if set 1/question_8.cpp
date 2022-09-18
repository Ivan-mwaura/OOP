#include <iostream>

using namespace std;

int main()
{
    int speed,speed_limit,overspeed,excess_speed,invalid_speed,illegal_speed;

    cout<<"**********NTSA SPEED HUNTERS********\n";
    cout<<"\nInput the cars speed ->";
    cin>>speed;
    cout<<"\nInput the specified speed limit ->";
    cin>>speed_limit;

    invalid_speed  = speed - speed_limit;
    illegal_speed = speed_limit +  30;

    if(speed  > speed_limit && speed < (speed_limit + 30))
    {
        cout<<"\nSPEED -> "<<speed<<" km|hr";
        cout<<"\nSPEED LIMIT -> "<<speed_limit<<" km|hr";
        cout<<"\nEXCESS SPEED -> "<<invalid_speed<<" km|hr";
        cout<<"\nFINE LEVIED -> 2500Ksh"<<"\n\n";
    }
    if(speed >illegal_speed )
    {
        cout<<"\nSPEED -> "<<speed<<" km|hr";
        cout<<"\nSPEED LIMIT -> "<<speed_limit<<" km|hr";
        cout<<"\nEXCESS SPEED -> "<<invalid_speed<<" km|hr";
        cout<<"\nFINE LEVIED -> 4000Ksh"<<"\n\n";
    }
    else
    {
        cout<<"\nYOU ARE IN THE SPECIFIED SPEED LIMIT ,HAVE A NICE JOURNEY AHEAD!\n\n";
    }
    return 0;
}
