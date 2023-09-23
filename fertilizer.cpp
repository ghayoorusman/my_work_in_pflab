#include<iostream>
using namespace std;
main()
{
int sizeofbag,costofbag,areas,costoffertilizer,costoffertilizing;
cout<<"enter size of the fertilizer bad in pounds: ";
cin>>sizeofbag;
cout<<"enter the cost of bag: ";
cin>>costofbag;
cout<<"enter the area in square feet that can covered by the bag: ";
cin>>areas;
cout<<"cost of fertiizer per pound: ";
costoffertilizer=costofbag/sizeofbag;
cout<<costoffertilizer << endl;
cout<<"cost of fertilizing per square foot: ";
costoffertilizing=sizeofbag*areas;
cout<<costoffertilizing;





}