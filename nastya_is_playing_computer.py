n,k = [int(e) for e in input().split()]
move_to_all_manhole = min(n-k,k-1) + (n-1)
open_manhole = n
throw = n + 1
print(throw+move_to_all_manhole+open_manhole)
