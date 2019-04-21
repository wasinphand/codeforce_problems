n = int(input())
data = {"L":list(),"R":list()}
x = [int(e) for e in input().split()]
for i in range (n):
    
    if x[i]==1:#1-->R
        data["R"].append(i)
    elif x[i]==0: #0 ---> L
        data["L"].append(i)
        
if data["L"][-1] > data["R"][-1]:
    print(data["R"][-1] +1)
else:
    print(data["L"][-1] +1)

    
        
