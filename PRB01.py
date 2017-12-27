t=int(input())
for i in range(t):
 n=int(input())
 flag=0
 for i in range(2,n):
  if n%i==0:
   flag=1
 if flag==1:
  print("no")
 else:
  print("yes")
   
