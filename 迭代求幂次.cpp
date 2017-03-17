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
 cout<<"请输入一个数";
 cin>>x;
 cout<<"请输入指数";
 cin>>n;
 if(x==0&&n==0)
	 cout<<"此运算无意义"<<endl;
 else
	 cout<<x<<"的"<<n<<"次幂为"<<power(x,n)<<endl;
 return 0;
}
