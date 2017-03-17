#include<iostream>
using namespace std;
int main()
{int n;
cin>>n;
int i=2,f=1;
while(i<=n)
{f*=i;
i=i+1;
}
cout<<"jg"<<n<<"="<<f<<endl;
return 0;
}