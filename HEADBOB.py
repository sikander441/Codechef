t=int(input())
for _ in range(t):
 n=int(input())
 ges=str(input())
 if 'I' in ges:
  print("INDIAN")
 elif 'Y' not in ges:
  print("NOT SURE")
 else:
  print("NOT INDIAN")
