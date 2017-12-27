#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
   string s1,s2;
   cin>>s1>>s2;
   long long int len=s1.length(),i;
   long long int min=0,max=0;
   for(i=0;i<len;i++)
   {
    if(s1[i]!=s2[i] && ( (s1[i]!='?') && (s2[i]!='?') ) )
     min++;
    else if(s1[i]=='?' || s2[i]=='?')
     max++;
   }
 cout<<min<<" "<<(max+min)<<endl;
 }
 return 0;
}
