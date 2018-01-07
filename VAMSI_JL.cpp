#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{  
 long int t;cin>>t;
 while(t--)
 {
  long int x,y,p,q;cin>>x>>y>>p>>q;
  if(x>y)
  {
   swap(x,y);
   swap(p,q);
  }
 if(p<=q)
  cout<<"NO"<<endl;
 else
  {
     if ( (x-y)%(q-p)==0  )
      cout<<"YES"<<endl;
     else
      cout<<"NO"<<endl;
  }
 }
 return 0;
}
