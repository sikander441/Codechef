#include<iostream>
using namespace std;
int main()
{
 long long int rounds,score1,score2;
 long long int prev_score1=0,prev_score2=0;
 int winner;
 long long int maxscore=0;
 cin>>rounds;
 while(rounds--)
 {
  cin>>score1>>score2;
  score1+=prev_score1;
  score2+=prev_score2;
  prev_score1=score1;
  prev_score2=score2;
  long long int diff=score1-score2;
  if(abs(diff)>maxscore)
  {
   maxscore=abs(diff);
   if(diff<0)
    winner=2;
   else
    winner=1;
  }
 }
cout<<winner<<" "<<maxscore<<endl;
 return 0;
}
