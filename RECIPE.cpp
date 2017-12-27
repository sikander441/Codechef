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
  int n;
  cin>>n;
  int arr[n];
  cin>>arr[0];
  int g=arr[0];
  for(int i=1;i<n;i++)
  {
   cin>>arr[i];
   g=__gcd(g,arr[i]);
  }
 for(int i:arr)
 {
   cout<<(i/g)<<" ";
 }
cout<<endl;
 }
 return 0;
}
