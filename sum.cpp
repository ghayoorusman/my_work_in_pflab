#include<iostream>
using namespace std;
main()
{
int a,b,c,d,e,f,g,h,sums;
cout<<"enter 4-digit number: ";
cin>>a;
b=a%10;
c=a/10;
d=c%10;
e=c%10;
f=e%10;
g=e%10;
h=g%10;
cout<<"sum of indivisual numbers: ";
sums=b+d+f+h;
cout<<sums;




}