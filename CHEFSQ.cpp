#include<string>
#include<iostream>
using namespace std;
string accept()
{
 string str;
 int n;cin>>n;
   while(n--)
   { 
    string ch;
    cin>>ch;
    str+=ch+'.';
   }
  return str;
}
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
   string str=accept();
   string sub=accept();
   if(str.find(sub)!=string::npos)
     cout<<"Yes"<<endl;
   else
     cout<<"No"<<endl;
 }
 return 0;
} 
