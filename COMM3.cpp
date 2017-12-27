#include<bits/stdc++.h>
using namespace std;
void print(int arr[][2])
{
 for(int i=0;i<3;i++){
   for(int j=0;j<2;j++)
     cout<<arr[i][j]<<" ";
   cout<<endl;
 }
}
double dist(int arr[][2],int x1,int x2)
{
 return (double)sqrt(pow((arr[x1][0]-arr[x2][0]),2)+pow((arr[x1][1]-arr[x2][1]),2));
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int t;
 int arr[3][2];
 cin>>t;
 while(t--)
 {
  int r;cin>>r;
  for(int i=0;i<3;i++)
   for(int j=0;j<2;j++)
     cin>>arr[i][j];
  //print(arr);
  //cout<<dist(arr,2,0)<<" "<<dist(arr,2,1)<<endl;
  if(dist(arr,0,1)<=r && dist(arr,0,2)<=r)
   cout<<"yes"<<endl;
  else if(dist(arr,1,2)<=r && dist(arr,1,0)<=r)
   cout<<"yes"<<endl;
  else if(dist(arr,2,0)<=r && dist(arr,2,1)<=r)
   cout<<"yes"<<endl;
  else
   cout<<"no"<<endl;
 }
 return 0;
}
