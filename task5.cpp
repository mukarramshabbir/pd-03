#include <iostream>
using namespace std;
main()
{
string name;
cout<<"Enter your name : ";
cin>>name;

float sub1;
cout<<"Enter subject 1 marks = ";
cin>>sub1;

float sub2;
cout<<"Enter subject 2 marks = ";
cin>>sub2;

float sub3;
cout<<"Enter subject 3 marks = ";
cin>>sub3;

float sub4;
cout<<"Enter subject 4 marks = ";
cin>>sub4;

float sub5;
cout<<"Enter subject 5 marks = ";
cin>>sub5;

float sub6;
cout<<"Enter subject 6 marks = ";
cin>>sub6;

float total;
total= sub1+sub2+sub3+sub4+sub5+sub6;
cout<<name <<" total marks are = "<<total<<endl;

float perc;
perc=total/505*100;
cout<<name <<" your percentage is = "<<perc<<endl;
cout<<"CONGRAJULATIONS "<< name ;

}