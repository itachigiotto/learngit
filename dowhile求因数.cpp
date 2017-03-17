#include<iostream>
using namespace std;
int main()
{int n;
 int k;
 k=0;
 cout<<"press a positive integar:"<<endl;
 cin>>n;
 do
 {k++;
 if(n%k==0)
	 cout<<k<<" ";
 }while(k<=n);
 return 0;
}