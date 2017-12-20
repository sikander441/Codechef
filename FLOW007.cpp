#include<bits/stdc++.h>
using namespace std;
int rev(int n)
{
 int m=0;
 while(n>0)
 {
  int rem=n%10;
  m=m*10+rem;
  n/=10;
 }
 return m;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int t,n;
 cin>>t;
 while(t--)
 {
  cin>>n;
  cout<<rev(n)<<endl;
 }
 return 0;
 }
