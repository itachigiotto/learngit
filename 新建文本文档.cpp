#include<iostream>
using namespace std;
int main()
{int a,b,c,max;
cout<<"请输入三个数："<<endl;
cout<<"a="<<endl;
cin>>a;
cout<<"b="<<endl;
cin>>b;
cout<<"c="<<endl;
cin>>c;
cout<<"呵呵哒你这都不会你是猪么"<<endl;
if(a>b)
max=a;
else max=b;
if(c>max)
max=c;
cout<<"max="<<max<<endl;
return 0;
}