#include<bits/stdc++.h>
using namespace std;
void solve(long int arr[], int n, int sum)
{
    if (n == 0 || sum < 0)
       return;
 
   bool *dp[n];
    for (int i=0; i<n; ++i)
    {
        dp[i] = new bool[sum + 1];
        dp[i][0] = true;
    }
 
    // Sum arr[0] can be achieved with single element
    if (arr[0] <= sum)
       dp[0][arr[0]] = true;
 
    // Fill rest of the entries in dp[][]
    for (int i = 1; i < n; ++i)
        for (int j = 0; j < sum + 1; ++j)
            dp[i][j] = (arr[i] <= j) ? dp[i-1][j] ||
                                       dp[i-1][j-arr[i]]
                                     : dp[i - 1][j];
    if (dp[n-1][sum] == false)
    {
        printf("There are no subsets with sum %d\n", sum);
        return;
    }
 
    // Now recursively traverse dp[][] to find all
    // paths from dp[n-1][sum]
    
  for(int j=0;j<n;j++){
 for(int i=0;i<=sum;i++)
  cout<<dp[j][i]<<" ";
 cout<<endl;}

int j=sum;
int i=n-1;
int x=0;
while(1)
{
   if(i>0 && dp[i-1][j])
     i--;
   else
     {
      if(j>0 && dp[i][j-1])
	{
         j--;
         cout<<arr[i]<<" ";
         }
      else  break;
     }
}

cout<<endl;

}



int main()
{
 long int t;
 cin>>t;
 while(t--)
 {
  long int n,x;
  cin>>x>>n;
  long int sum=((n*(n+1))/2)-x;
  if( ((sum))%2!=0 || (x==1 && n==2) )
   cout<<"impossible"<<endl;
  else
   {
    long int arr[n-1];
    for(int i=0;i<n-1;i++)
     if(i<x-1)
      arr[i]=i+1; 
     else
      arr[i]=i+2;
   

for(int i=0;i<n-1;i++)
    cout<<arr[i]<<":";
  cout<<sum/2<<endl;
   
    solve(arr,n-1,sum/2);   
   }
  
 }
 return 0;
}
