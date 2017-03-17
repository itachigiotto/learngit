#include<iostream>
#include<cstring>
using namespace std;
int main()
{const int MAX_LEN=100;
 char str[MAX_LEN];
 cout<<"Enter a char string"<<endl;
 cin>>str;
 int len =strlen(str);
 for(int i=0,j=len-1;i<j;i++,j--)
 {char temp;
  temp=str[i];
  str[i]=str[j];
  str[j]=temp;
 }
 cout<<str<<endl;
 return 0;
}
