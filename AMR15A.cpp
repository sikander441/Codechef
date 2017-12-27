#include<iostream>
using namespace std;
int main()
{
 int t,e,o;
 cin>>t;
 e=o=0;
 while(t--)
 {
  int x;
  cin>>x;
  if(x%2==0)
   e++; 
  else
   o++;
 }
 if(e>o)
  cout<<"READY FOR BATTLE"<<endl;
 else
  cout<<"NOT READY"<<endl;
 return 0;
}
