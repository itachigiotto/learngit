#include <iostream>
using namespace std;
double power(double x,int n)
{if(x==0)return 0;
 if(n==0)
	 return 1;
 else if(n>0)
	 return x*power(x,n-1);
 else
	 return 1/power(x,n-1);
}
int main()
{double x;
 int n;
 cout<<"������һ����";
 cin>>x;
 cout<<"������ָ��";
 cin>>n;
 if(x==0&&n==0)
	 cout<<"������������"<<endl;
 else
	 cout<<x<<"��"<<n<<"����Ϊ"<<power(x,n)<<endl;
 return 0;
}
