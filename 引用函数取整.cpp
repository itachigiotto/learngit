#include<iostream>
using namespace std;
double G(double x)
{cin>>x;
 int n;
 n=0;
 if(x>=0)
 {if(x<=n+1)
	cout<<n;
	return 0;
  if(x>n+1)
		 n++;
 }
 else
 {if(x>=n-1)
	cout<<n-1;
    return 0;
  if(x<n-1)
		 n--;
 }
}
double main()
{double x;
 int m;
 cout<<"������һ��С��"<<endl;
 cin>>x;
 m=G(x);
 cout<<x<<"������������"<<m<<endl;
 return 0;
}
   