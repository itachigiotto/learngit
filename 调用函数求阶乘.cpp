#include <iostream>
using namespace std;
int factorial(int n)
{  int f;
   for (f=1;n>=2;n--)f*=n;
   return f;
}
int main()
{  int x;
   cout<<"zhengzhengshu:";
   cin>>x;
   cout<<"Factorial of "<<x<<"is"<<factorial(x)<<endl;
   return 0;
}