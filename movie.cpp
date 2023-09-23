#include<iostream>
using namespace std;
main()
{
string movie_name;
int adult_price,sold1,child_price,sold2,donation;
int total_income,remaining_price;
float charity_price;
cout<< "enter the movie name: ";
cin>>movie_name;
cout<<"enter the adult ticket price: ";
cin>>adult_price;
cout<<"enter the no of adult ticket sold: ";
cin>>sold1;
cout<<"enter the child ticket price: ";
cin>>child_price;
cout<<"enter the no. of child ticket sold: ";
cin>>sold2;
cout<<"enter the percentage of charity:";
cin>>donation;
cout<<"total amount generated from ticket sales: ";
total_income=(adult_price*sold1)+(child_price*sold2);
cout<<total_income <<endl;
cout<<"charity price(" <<donation<< "): ";
charity_price= total_income*donation/100 ;
cout<<charity_price << endl;
cout<<"remaing amout after donation: ";
remaining_price=(total_income)-(charity_price);
cout<<remaining_price;








}