#include<iostream>
using namespace std;
string merge(string a,string b,string c,int i,int j)
{
if(i==a.length() && j==b.length())
  {cout<<" final:"<<c<<endl;}
if(i<a.length()){
 c+=a[i++];cout<<c<<endl;
 merge(a,b,c,i,j);}
 if(j<b.length())
  {c+=b[j++];cout<<c<<endl;
 merge(a,b,c,i,j);
 }

}
void solve()
{
  int m,n;cin>>m>>n;
  string a,b;
  cin>>a>>b;
  string c="";
  merge(a,b,c,0,0);
 
}
int main()
{
 int t;cin>>t;
 while(t--)
  solve();
 return 0;
}
