#include<stdio.h>
int main()
{
 int t;
 scanf("%d",&t);
 int a,b,c,d;

 while(t--)
{
  scanf("%d %d %d %d",&a,&b,&c,&d);
 if(a==b && c==d)
  printf("YES\n");
 else if(a==c && b==d)
   printf("YES\n");
 else if(b==c && a==d)
   printf("YES\n");
 else
   printf("NO\n");
 }
}
