#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 long long int t;
 cin>>t;
 while(t--)
 {
   long long int n;
   cin>>n;
   long long int arr[n];
   for(int i=0;i<n;i++)
    cin>>arr[i];
   sort(arr,arr+n);
   cout<<arr[0]+arr[1]<<endl;
 }
 return 0;
}
