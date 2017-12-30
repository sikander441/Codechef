#include<bits/stdc++.h>
using namespace std;
unsigned long long int modularExponentiation(int x,int n,int M)
{
    int result=1;
    while(n>0)
    {
        if(power % 2 ==1)
            result=(result * x)%M;
        x=(x*x)%M;
        n=n/2;
    }
    return result;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 unsigned long long int t;
 cin>>t;
 while(t--)
 {
  unsigned long long int A,N,hold;
  cin>>A>>N;
  hold=modularExponentiation(A,N,9);
 // cout<<hold<<endl;
   if((hold%9)==0)
    cout<<"9"<<endl;
   else
    cout<<(hold%9)<<endl;
 }
}
