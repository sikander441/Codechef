t=int(input())
for _ in range(t):
 x,y=[int(x) for x in input().split()]
 if x<y:
  print('<')
 elif x>y:
  print( '>')
 else:
  print('=')
