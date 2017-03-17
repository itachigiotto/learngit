#include<iostream>
using namespace std;
int count=0;
long int fib(int n)
{ count++;
  if(n==1||n==2)
	  return 1;
  else
	  return fib(n-1)+fib(n-2);
}
int main()
{int n;
 cout<<"请输入一个正整数"<<endl;
 cin>>n;
 cout<<fib(n)<<endl;
 return 0;
}
