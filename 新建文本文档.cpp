#include<iostream>
using namespace std;
int main()
{int a,b,c,max;
cout<<"��������������"<<endl;
cout<<"a="<<endl;
cin>>a;
cout<<"b="<<endl;
cin>>b;
cout<<"c="<<endl;
cin>>c;
cout<<"�Ǻ������ⶼ����������ô"<<endl;
if(a>b)
max=a;
else max=b;
if(c>max)
max=c;
cout<<"max="<<max<<endl;
return 0;
}