t=int(input())
for i in range(t):
 n=str(input())
 slen=len(n)
 x,y=0,slen-1
 while x<y:
  if n[x]!=n[y]:
    print("losses")
    break
  x+=1
  y-=1
 else:
    print("wins")
