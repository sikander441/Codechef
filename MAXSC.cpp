#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
void solve()
{
 int n;

  scanf("%d",&n);
   long long int arr[n][n];
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++)
      scanf("%lld",&arr[i][j]);
     sort(arr[i],arr[i]+n);
    
   }
  long long int sum=arr[n-1][n-1];
  long long int prevmax=arr[n-1][n-1];
  for(int i=n-2;i>=0;i--)
  {
    int j=n-1;
    while(j>=0 && arr[i][j]>=prevmax)
     j--;
    if(j>=0)
     {
       sum+=arr[i][j];
       prevmax=arr[i][j];
     }
     else
     {
      printf("-1\n");
      return;
     }
    
  }
 printf("%lld\n",sum);
}
int main()
{
 int t;
 scanf("%d",&t);
 
 while(t--)
 {
  solve();
}
}
