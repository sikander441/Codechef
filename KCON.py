def solve(a,size,m):
     
    max_so_far =a[0]
    curr_max = a[0]
     
    for i in range(1,size):
        curr_max = max(a[i%m], curr_max + a[i%m])
        max_so_far = max(max_so_far,curr_max)
         
    return max_so_far
 
 
t=int(input())
for _ in range(t):
 l=[int(x) for x in input().split()]
 n,k=l[0],l[1]
 A=[int(x) for x in input().split()]
 if(n*k>100000):
	 x1=solve(A,n*2,n)
	 x2=solve(A,n*3,n)
	 k-=2
	 print(x1+(x2-x1)*k) 
 else:
  B=A*k;
  print(solve(B,n*k,n*k))
