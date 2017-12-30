def pow_mod(x, y, z):
    "Calculate (x ** y) % z efficiently."
    number = 1
    while y:
        if y & 1:
            number = number * x % z
        y >>= 1
        x = x * x % z
    return number
t=int(input())
for _ in range(t):
 l=[int(x) for x in input().split()]
 A=l[0]
 N=l[1]
 #print(((pow(A,N))))
 if( ((pow_mod(A,N,9))%9)==0):
  print("9")
 else:
  print( (pow_mod(A,N,9)%9) )
