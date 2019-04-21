n = list(input().strip())
n = '+'.join(n)
print("YES" if eval(n)%5==0 else "NO")
