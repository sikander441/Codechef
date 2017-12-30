#include<iostream>
#include<map>
using namespace std;
int main()
{
 
 map<string,int>m;
 m["mon"]=0;
 m["tues"]=1;
  m["wed"]=2;
 m["thurs"]=3;
 m["fri"]=4;
 m["sat"]=5;
 m["sun"]=6;
 
 int t;
cin>>t;
while(t--)
{
 int counter[7]={0};
 int days;cin>>days;
 string a;
 cin>>a;
 int x=m[a];
 for(int i=0;i<days;i++)
   counter[((i+x)%7)]++;
 for(int i=0;i<7;i++)
  cout<<counter[i]<<" ";
 cout<<endl;
} 
return 0;
}
