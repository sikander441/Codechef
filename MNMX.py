t=int(input())
for _ in range(t):
 n=int(input())
 l=[int(x) for x in input().split()]
 print(min(l)*(n-1))
