#include <iostream>
using namespace std;
main()
{
int salary;
cout<<"Basic salary of an employ = ";
cin>>salary;

int rent;
rent=salary*45/100;
cout<<"House rent = "<<rent<<endl;

int medical;
medical=salary*15/100;
cout<<"Medical allowance = "<<medical<<endl;

int gross;
gross=salary+rent+medical;
cout<<"Gross salary = "<<gross<<endl;

int tax;
tax=gross*3/100;
cout<<"Income tax = "<<tax<<endl;

int ded;
cout<<"total deduction = ";
cin>>ded;
 
int net;
net=gross-tax-ded;
cout<<"Net salary = "<<net;







}