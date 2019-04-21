n = int(input())
data = [int(e) for e in input().split()]
def sol(k):
    if data[:k//2] == sorted(data[:k//2]) or data[k//2:] == sorted(data[k//2:]):
        return k//2
    return sol(k//2)
if data[:n] == sorted(data[:n]):
    print(n)
else:
    print(sol(n))
