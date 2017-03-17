#include<iostream>
#include<cmath>
using namespace std;
inline double EulerNumber(int n)
{double x,y,c;
 x=0;
 int t=n;
 do
 {x=x+1/t;
 t--;
 }while (t>0);
 y=log(n);
 c=x-y;
 return c;
}
int main()
{int n;
 cout<<"Enter a positive number of terms"<<endl;
 cin>>n;
 cout<<EulerNumber(n)<<endl;
 return 0;
}