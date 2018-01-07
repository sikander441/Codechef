import math
ans=float('inf')
def F(S):
 leng=len(S)
 counter=0
 for i in range(0,leng-1):
  if S[i]!=S[i+1]:
   counter+=1
 global ans
 ans=min(ans,counter+1)
def toString(List):
   F("".join(List))
def printIlsRecur(str1, str2, iStr, m, n, i):
    if m==0 and n==0:
        toString(iStr)
    if m != 0:
        iStr[i] = str1[0]
        printIlsRecur(str1[1:], str2, iStr, m-1, n, i+1)

    # and recur for rest
    if n != 0:
        iStr[i] = str2[0]
        printIlsRecur(str1, str2[1:], iStr, m, n-1, i+1)
def printIls(str1, str2, m, n):
    iStr = [''] * (m+n)
    printIlsRecur(str1, str2, iStr, m, n, 0)

t=int(raw_input())
for _ in range(t):
        l=raw_input().split()
	str1 =raw_input()
	str2 =raw_input()
	printIls(str1, str2, len(str1), len(str2))
	print ans

