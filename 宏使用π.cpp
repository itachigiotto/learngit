#include<iostream>
using namespace std;
#define PI 3.14159265
int main()
{double r;
 cout<<"请输入一个正数"<<endl;
 cin>>r;
 cout<<"该圆的周长为"<<2*PI*r<<endl;
 cout<<"该圆的面积为"<<PI*r*r<<endl;
 cout<<"该球的表面积为"<<4*PI*r*r<<endl;
 cout<<"该球的体积为"<<4*PI*r*r*r/3<<endl;
 return 0;
}
