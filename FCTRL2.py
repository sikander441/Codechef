from math import factorial as f
t=int(input())
dic={}
for i in range(0,t):
 n=int(input())
 if n in dic.keys():
  print(str(dic[n]))
 else:
  fact=f(n)
  dic[n]=str(fact)
  print(fact)
