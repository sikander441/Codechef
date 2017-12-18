#include<iostream>
#include<map>
using namespace std;
int main()
{
 int t;
 cin>>t;
 string arr1[8]={"SL","LB","MB","UB","LB","MB","UB","SU"};
 int arr2[8]={-1,3,3,3,-3,-3,-3,1};
 while(t--)
 {
  int n; 
  cin>>n;
  cout<<(n+arr2[n%8])<<arr1[n%8]<<endl;
 }
 return 0;
}
