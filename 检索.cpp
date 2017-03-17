#include<iostream>
#include<cstring>
using namespace std;
inline int find_substr(char str[],char substr[])
{int len=strlen(str);
 int sublen=strlen(substr);
 for(int i=0,j=0;i<len-sublen;i++)
 {while(j<sublen&&substr[j]==str[i+j])j++;	  
  if(j==sublen)
	  return i;
 }
 return -1;
}
int main()
{const int MAX_LEN=100;
 char str[MAX_LEN],substr[MAX_LEN];
 cout<<"Enter a former string"<<endl;
 cin>>str;
 cout<<"Enter a small string"<<endl;
 cin>>substr;
 cout<<find_substr(str,substr)+1;
 return 0;
}