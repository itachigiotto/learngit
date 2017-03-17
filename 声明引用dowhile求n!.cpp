#include<iostream>
using namespace std;
int main()
{int n;
cin>>n;
int i=1,f=1;
int &r=n;
do
{f*=i;
i=i+1;
}while(i<=r);
cout<<"factorial of"<<n<<"="<<f<<endl;
return 0;
}