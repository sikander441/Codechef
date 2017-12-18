#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 long int t;
 cin>>t;
 long long int n,rem,ans;
 while(t--)
 {
    cin>>n;
    int r = 0, num = n;
    while (num >= 5)
    {
    num = (num << 1) / 10;
    r += num;
    }
    cout<<r<<endl;
  }

 return 0;
}
