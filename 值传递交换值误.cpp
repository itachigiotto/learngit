#include <iostream>
using namespace std;
void swap(double x,double y)
{double t=x;
 x=y;
 y=t;
}
int main()
{double x,y;
 cout<<"Enter a positive real number x which is equal to ";
 cin>>x;
 cout<<"Enter another positive real number y which is equal to ";
 cin>>y;
 swap(x,y);
 cout<<"We have exchanged them."<<endl;
 cout<<"x is equal to "<<x<<endl;
 cout<<"y is equal to "<<y<<endl;
 return 0;
}
