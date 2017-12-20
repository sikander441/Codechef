#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int t;
 cin>>t;
 while(t--)
 {
  string n;
  cin>>n;
  long int len=n.length();
  if(len==2)
   cout<<"No"<<endl;
  else
  {
    int counter=count(n.begin(),n.end(),'1');
    if(count(n.begin(),n.end(),'1')==1)
     cout<<"Yes"<<endl;
    else if(count(n.begin(),n.end(),'0')==1)
     cout<<"Yes"<<endl;
    else
     cout<<"No"<<endl;
  }

 }
return 0;
}
