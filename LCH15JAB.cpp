#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  vector<long long int>counter(26,0);
  string str;
  cin>>str;
  long long int len=str.length();
  for(int i=0;i<len;i++)
   counter[str[i]-'a']++;
  long long int sum=0;
  for(int i=0;i<26;i++)
   sum+=counter[i];
  int flag=1;
  for(int i=0;i<26;i++)
  {
   if(counter[i]==(sum-counter[i]))
   {flag=0;cout<<"YES"<<endl;break;}
  }
 if(flag==1)
  cout<<"NO"<<endl;
 }
}
