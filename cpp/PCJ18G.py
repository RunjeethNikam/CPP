import math
mod = 1000000007
for test in range(int(input())):
    N = int(input())
    sm = 0
    sum = 0
    for i in range(1, int(math.sqrt(N)) + 1):
        items = N//i;
        sm = items * (items + 1)/2
        sum = (sum%mod + (i%mod * sm%mod)%mod)%mod
    start = int(math.sqrt(N)) +1
    end = N
    length = end - start + 1
    sum = (sum%mod +((length%mod/2%mod)%mod * (start%mod + end%mod)%mod)%mod)%mod
    print(sum%mod)
