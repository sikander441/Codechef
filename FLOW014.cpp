#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {   int h,ts;
        float cc;
        scanf(" %d%f%d",&h,&cc,&ts);
        int x;
        if(h<=50 && cc>=0.7 && ts<=5600){x=5;}
        if(h>50 || cc<0.7 || ts>5600){x=6;}
        if(h>50 && ts>5600){x=7;}
        if(cc<0.7 && ts>5600){x=8;}
        if(h>50 && cc<0.7){x=9;}
        if(h>50 && cc<0.7 && ts>5600){x=10;}
        printf("%d\n",x);
    }
    return 0;
}
 
