#include <iostream>
using namespace std;
main()
{
int number;
cout<<"Enter a four digit number : ";
cin>>number;

int d4;
d4=number%10;
number=number/10;

int d3;
d3=number%10;
number=number/10;

int d2;
d2=number%10;
number=number/10;

int d1;
d1=number%10;
number=number/10;

int output;
output=d1+d2+d3+d4;
cout<<"The output would be : "<<output;

}