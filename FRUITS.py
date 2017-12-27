t=int(input())
for _ in range(t):
 l=[int(x) for x in input().split()]
 minn=min(l[0],l[1])
 maxx=max(l[0],l[1])
 diff=maxx-minn
 if(diff<=l[2]):
  print(0)
 else:
  print(maxx-(minn+l[2]))
