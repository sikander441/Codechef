t=int(input())
denom=[100,50,10,5,2,1]
for _ in range(0,t):
    n=int(input())
    counter,pos=0,0
    for i in denom:
        while(int(n/i)>0):
            counter+=1
            n-=i
    print(counter)
