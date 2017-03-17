#include<iostream>
using namespace std;
int main()
{const int n=20;
 int m;
 cout<<"Enter the needed number"<<endl;
 cin>>m;
 int a[n];
 for(int i=0;i<n;i++)
	 a[i]=i+1;
 int k=n;
 int t=0;
 do
 {int q=m%k-1;
 if(k==2)
	 q=m%k;
  t=t+q;
  while(t>k-1)
	  t=t-k;
  a[t]=0;
  for(int b=t;b<k;b++)a[b]=a[b+1];
  a[k-1]=0;
  k--;
 }while(k>1);
 cout<<a[0]<<endl;
 return 0;
}