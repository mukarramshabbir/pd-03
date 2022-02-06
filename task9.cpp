#include <iostream>
using namespace std;
main()
{
int num;
cin>>num;
cout<<"Enter a four digit number : "<<num<<endl;

int d4;
d4=num%10;
num=num/10;

int d3;
d3=num%10;
num=num/10;

int d2;
d2=num%10;
num=num/10;

int d1;
d1=num%10;
num=num/10;

int total;
total=d1+d2+d3+d4;
cout<<"the output is = "<<total;

}