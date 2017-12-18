#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 unsigned long long int n,k;
 long long int sum=0;
 unsigned long long int x;
 cin>>n>>k;
 while(n--)
 { 
   cin>>x;
   if(x%k==0)
    sum+=1;
 }
 cout<<sum<<endl;
 return 0;
}
