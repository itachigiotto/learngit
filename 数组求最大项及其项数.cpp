#include<iostream>
using namespace std;
int max(int x[],int num)
{int max_index=0;
 for(int i=1;i<num;i++)
	 if(x[i]>x[max_index])
		 max_index=i;
 return max_index;
}
int main()
{int a[10],b[10];
 int index_max;
 cout<<"Enter two squences of ten terms"<<endl;
 for(int ta=0;ta<10;ta++)
	 cin>>a[ta];
 for(int tb=0;tb<10;tb++)
	 cin>>b[tb];
 index_max=max(a,10);
 cout<<"The largest member of a is "<<a[index_max]<<" and it`s term is "<<index_max+1<<endl;
 index_max=max(b,10);
 cout<<"The largest member of b is "<<b[index_max]<<" and it`s term is "<<index_max+1<<endl;
 return 0;
}