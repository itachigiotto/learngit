#include <iostream>
#include <cmath>
using namespace std;
int main ()
{ double p;
  cout<<"���������Ϊ";//��ʵ�����Ǿ�ȷ��������
  cin>>p;
  double a,x1,x2;
  cout<<"����һ����";
  cin>>a;
  x2=a;
  do
  { x1=x2;
    x2=(2*x1+a/(x1*x1))/3;
  } while (fabs(x2-x1)>=p);
  cout<<a<<"����������"<<x2<<endl;
  return 0;
}
