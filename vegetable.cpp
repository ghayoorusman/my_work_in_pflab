#include<iostream>
using namespace std;
main()
{
float nv,mf,incoin,inrp;
int kv,kf;
cout<< "enter vegetable price per kg(coins): ";
cin>>nv;
cout<< "enter fruit price per kg(coins): ";
cin>>mf;
cout<< "enter total kg of vegetable: ";
cin>>kv;
cout<< "enter total kf of fruits: ";
cin>>kf;
cout<<"total earning in rupees: ";
incoin=(nv*kv)+(mf*kf);
inrp= incoin/1.94;
cout<<inrp;






}