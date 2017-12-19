#include<iostream>
using namespace std;
int sumofdigits(long long int n)
{
 int sum=0;
 while(n>0)
 {
  sum+=(n%10);
  n/=10;
 }
return sum;
}
int main()
{
 long long int n;
 int t;
 cin>>t;
 while(t--)
{
   cin>>n;
   cout<<sumofdigits(n)<<endl;
} 
return 0;
}
