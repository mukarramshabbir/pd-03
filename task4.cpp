#include <iostream>
using namespace std;
main()
{
int v2;
cout<<"Enter final velocity = ";
cin>>v2;

int v1;
cout<<"Enter initial velocity = ";
cin>>v1;

int  time;
cout<<"Enter time = ";
cin>>time;

int acc;
acc=(v2-v1)/time;
cout<<"Acceleration = "<<acc;

}