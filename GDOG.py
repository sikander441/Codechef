t=int(input())
for _ in range(t):
 l=[int(x) for x in input().split()]
 if l[1]>(l[0]/2):
  rem=l[0]%(l[0]/2+1)
 elif l[1]==(l[0]/2):
  rem=l[0]%(l[0]/2-1)
 else:
  rem=l[0]%l[1] 
 print(int(rem))
