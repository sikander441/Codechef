#include<iostream>
#include<iomanip>
using namespace std;
float transact(int a,float b)
{ 
 if(a%5!=0)
  return 0;
 if(a>b)
  return 0;
 if(a>(b-0.50))
  return 0;
return((b-a) - 0.50);
}
int main()
{cout<<fixed<<setprecision(2);
 int withdraw;
 float balance;
 cin>>withdraw>>balance;
 float x=transact(withdraw,balance);
 if(x==0)
  cout<<balance<<endl;
 else
  cout<<fixed<<setprecision(2)<<x<<endl;
 return 0;
}

