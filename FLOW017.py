t=int(input())
for _ in range(0,t):
  a,b,c=input().split()
  a,b,c=int(a),int(b),int(c)
  print((a+b+c)-(min(a,b,c)+max(a,b,c)))
