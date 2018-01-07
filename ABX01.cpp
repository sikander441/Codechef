#include<bits/stdc++.h>
#define lli long long int
#define EB emplace_back
#define all(o) (o).begin(), (o).end()
using namespace std;
typedef vector<lli> vi;
template <class T> inline T binpow(T p,T e,T M){lli ret = 1;for(; e > 0; e >>= 1){
if(e & 1) ret = (ret * p) % M;p = (p * p) % M;}return (T)ret;}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}
lli countbits(lli n){lli count=0;while(n){n = n&(n-1);count++;}return count;}
lli tolli(string s){lli sm;stringstream ss(s);ss>>sm;return sm;}
vi tobinary(lli n){vi bin;while(n){bin.EB(n%2);n/=2;};reverse(all(bin));return bin;}
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
  hold=binpow<unsigned long long int>(A,N,9);
 // cout<<hold<<endl;
   if((hold%9)==0)
    cout<<"9"<<endl;
   else
    cout<<(hold%9)<<endl;
 }
}
