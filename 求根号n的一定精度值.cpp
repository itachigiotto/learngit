#include<iostream>
using namespace std;
double main()
{double t;//Ҫ���ԭ����
cout<<"Ҫ�����Ϊ";
cin>>t;
double i;
double m;//���ȣ���һ��ʾ��ֵ
cout<<"�׾���Ϊ";
cin>>m;
i=0;
while(i*i<t)
{i=i+m;
}
cout<<"����"<<t<<"="<<i<<endl;
return 0;
}