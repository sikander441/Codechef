#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;long int p;
 cin>>t;
 while(t--)
 {
     int counter=0;
     cin>>p;
     while(p>2048)
     {
       counter++;
       p-=2048;
     }
     bitset<12>x(p);
     cout<<(counter+x.count())<<endl;
 }
 return 0;
}
