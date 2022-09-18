#include <iostream>
 using namespace std;

 int main()
 {
     int base,hei,hyp,length,width,rad,choice;

     cout<<"********FIGURES**********\n ";
     cout<<"choice               Figure\n";
     cout<<"1)                   Triangle\n";
     cout<<"2)                    rectangle\n";
     cout<<"3)                    circle\n";

     cout<<"\nPlease select your figure of choice ->";
     cin>>choice;

     switch(choice)

     {
     case 1:
        cout<<"\nEnter the base ->";
        cin>>base;
        cout<<"Enter the height ->";
        cin>>hei;
        cout<<"Enter the hypotenuse ->";
        cin>>hyp;

        cout<<"\n\nThe area of the triangle is "<<0.5 * base *hei<<"\n<<The perimeter is "<<base + hei + hyp<<"\n\n";
        break;
     case 2:
         cout<<"\nEnter the length ->";
         cin>>length;
         cout<<"Enter the width ->";
         cin>>width;

         cout<<"\n\nThe area of the rectangle is "<<length * width<<"\n";
         cout<<"The area is "<<((2 * length) + (2 * width))<<"\n\n";
        break;
     case 3:
        cout <<"\nEnter the radius ->";
        cin>> rad;

        cout<<"\n\nThe area of the circle is "<<3.142 * rad * rad<<"\n";
        cout<<"The perimeter is "<< 3.142 * (2 *rad)<<"\n\n";
        break;
     }
 }
