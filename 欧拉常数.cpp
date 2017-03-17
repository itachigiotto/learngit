#include<iostream>
#include<cmath>
using namespace std;
int main()
{double n;
 cout<<"Enter a positive number of terms"<<endl;
 cin>>n;
 double x,y,c;
 x=0;
 y=log(n);
 do
 {x=x+1/n;
 n--;
 }while (n>0);
 c=x-y;
 cout<<c<<endl;
 return 0;
}