#include<iostream>
#include<vector>
using namespace std;


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
   
  long int x[]={3,2,5,4};
for(int i=0;i<4;i++)
    cout<<x[i]<<":";
  cout<<endl;
   vector<int> v;
    subsetSum(x,7,0,v,0,4);      
   }
  
 }
 return 0;
}
