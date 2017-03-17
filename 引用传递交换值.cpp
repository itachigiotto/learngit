#include<iostream>
using namespace std;
void swap(int &a,int &b)
{int t=a;
 a=b;
 b=t;
}
int main()
{int x,y;
 cout<<"Enter a real number x"<<endl;
 cin>>x;
 cout<<"Enter another real number y"<<endl;
 cin>>y;
 swap(x,y);
 cout<<"x="<<x<<"    y="<<y<<endl;
 return 0;
}