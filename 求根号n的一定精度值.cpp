#include<iostream>
using namespace std;
double main()
{double t;//要求的原数字
cout<<"要求的数为";
cin>>t;
double i;
double m;//精度，进一表示求值
cout<<"阶精度为";
cin>>m;
i=0;
while(i*i<t)
{i=i+m;
}
cout<<"根号"<<t<<"="<<i<<endl;
return 0;
}