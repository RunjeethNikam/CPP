def SieveOfEratosthenes(n):
    primes = [True for i in range(n+1)]
    p = 2
    while (p*p <= n):
        if(primes[p] == True):
            for i in range(p*p, n+1, p):
                primes[i] = False
            print(primes)
        p += 1
n = int(input())
SieveOfEratosthenes(n)