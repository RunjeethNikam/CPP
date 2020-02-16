# https://practice.geeksforgeeks.org/problems/prime-number-of-set-bits/0

primes = [2, 3,5,7, 11, 13, 17, 19, 23, 27, 31, 37]
def prime(n):
    count = 0
    while(n>0):
        count += n%2
        n = n//2
    return (count in primes)
for _ in range(int(input())):
    L, R = map(int, input().split())
    sum = 0
    for  i in range(L, R+1):
        if(prime(i)):
            sum += 1
    print(sum)