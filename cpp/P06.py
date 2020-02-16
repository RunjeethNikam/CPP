# tinyurl.com/KE217-p06
import math
def prime1(n):
    primes = [True] * (n+1)
    hi = list()
    for i in range(2, n+1):
        if(primes[i]):
            pos = i*i
            while(pos <= n):
                primes[pos] = False
                pos += i
            hi.append(i)
    return hi



for _ in range(int(input())):
    N = int(input())
    prime = prime1(N)
    product = 1
    for i in prime:
        if(N%i == 0):
            product *= i
    print(product)
