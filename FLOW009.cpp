#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
 int t;cin>>t;
 while(t--)
 {
  long long int x,y;
  cin>>x>>y;
  long  double total=x*y;
  if(x>1000)
   total*=0.9;
  cout<<fixed<<setprecision(6)<<total<<endl;
 }
}
