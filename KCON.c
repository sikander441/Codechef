#include<stdio.h>
int flag;

long long int max(long long int a,long long int b)
{
 return (a>b)?a:b;
}





long long int solve(long long int a[], long long int n);
 
// The function returns maximum circular contiguous sum
// in a[]
long long int solve2(long long int a[], long long int n)
{
   // Case 1: get the maximum sum using standard kadane'
   // s algorithm
   long long int max_kadane = solve(a, n);
 
   // Case 2: Now find the maximum sum that includes
   // corner elements.
   long long int max_wrap = 0, i;
   for (i=0; i<n; i++)
   {
        max_wrap += a[i]; // Calculate array-sum
        a[i] = -a[i];  // invert the array (change sign)
   }
 
   // max sum with corner elements will be:
   // array-sum - (-max subarray sum of inverted array)
   max_wrap = max_wrap +solve(a, n);
 
   // The maximum circular sum will be maximum of two sums
  if(max_wrap>max_kadane)
  {
   flag=1;
   return max_wrap;
  }
  else
  {
   flag=0;
   return max_kadane;
  }
}
 
// Standard Kadane's algorithm to find maximum subarray sum
// See https://www.geeksforgeeks.org/archives/576 for details
long long int solve(long long int a[], long long int n)
{
    long long int max_so_far = 0, max_ending_here = 0;
    long long int i;
    for (i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_ending_here < 0)
            max_ending_here = 0;
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}

int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
   long long int n,k;
   scanf("%lld %lld",&n,&k);
   long long int arr[n];
   for(long long int i=0;i<n;i++)
    scanf("%lld",&arr[i]);
  long long int x=solve2(arr,n);
 if(flag==1)
   printf("circle:%lld\n",x);
 else
      printf("straight:%lld\n",x);
 }
 }
