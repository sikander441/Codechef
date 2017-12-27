#include<iostream>
using namespace std;
long long int findsum(long long int n)
{
 return (n*(n+1))/2;
}
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
   int d,n;
   cin>>d>>n;
   long long int sum=(n*(n+1))/2;
   while(--d)
   {
    sum=findsum(sum);
   }
 cout<<sum<<endl;
 }
 return 0;
}
