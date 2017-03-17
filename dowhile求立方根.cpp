#include <iostream>
#include <cmath>
using namespace std;
int main ()
{ double p;
  cout<<"可容许误差为";//其实并不是精确的误差阶数
  cin>>p;
  double a,x1,x2;
  cout<<"输入一个数";
  cin>>a;
  x2=a;
  do
  { x1=x2;
    x2=(2*x1+a/(x1*x1))/3;
  } while (fabs(x2-x1)>=p);
  cout<<a<<"的立方根是"<<x2<<endl;
  return 0;
}
