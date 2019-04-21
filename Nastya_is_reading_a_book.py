n = int(input())
data = list()
for i in range (n):
    l,r = [int(e) for e in input().split()]
    data.append(r)
mark = int(input())
for i in range (n):
    if data[i] >= mark:
        print(n-i)
        break
    
