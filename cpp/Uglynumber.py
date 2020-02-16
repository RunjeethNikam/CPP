lis = [True]*(10**5+1)
primes = list()
for i in range(2, len(lis)):
    if(lis[i]):
        j = i*i;
        while(j < len(lis)):
            lis[j] = False
            j += i
        primes.append(i)
primes = primes[3:]
hi = [1,]
for i in range(2, 100000):
    for j in primes:
        if(i%j == 0):
            break
    else:
        hi.append(i)

for _ in range(int(input())):
    N = int(input())
    print(hi[N-1])
