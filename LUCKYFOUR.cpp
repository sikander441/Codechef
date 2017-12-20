#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  string n;
  cin>>n;
  cout<<count(n.begin(),n.end(),'4')<<endl;
 }
 return 0;
}
