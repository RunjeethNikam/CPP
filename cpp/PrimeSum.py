import math
# def Prime(given):
#     for i in range(2,math.ceil(math.sqrt(given))+1):
#         if(given%i == 0):
#             return False
#     return True
given = int(input())
primes = [True] *(given+1)
p = 2
while (p*p <= given):
    if(primes[p] == True):
        for i in range(p*p, given+1, p):
            primes[i] = False
    p += 1

low = 2
high = len(primes) -1
for i in range(2, given+1):
    if(primes[i] and primes[given-i]):
        print( [i, given-i])
