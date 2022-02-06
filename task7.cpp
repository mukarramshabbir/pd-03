#include <iostream>
using namespace std;
main()
{
float size;
cout<<"Enter size in pounds = ";
cin>>size;

float cost;
cout<<"Enter Cost of the bag = ";
cin>>cost;

float area;
cout<<"Enter the area in sq.feet = ";
cin>>area;

float a1;
a1=cost/size;
cout<<"Cost of the fertilizer per pound = "<<a1<<endl;

float a2;
a2=cost/area;
cout<<"Cost of fertilizing the area per square foot = "<<a2;




}