#include<cmath>
#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
   string str;cin>>str;
   int a=0,b=0,len=str.length();
   for(int i=0;i<len;i++)
   {
  	if(str[i]=='a')
         a++;
        else
         b++;
   }
 cout<<min(a,b)<<endl;
 }
 return 0;
}
