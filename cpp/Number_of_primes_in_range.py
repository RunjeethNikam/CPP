import math
def primes(N):
    primes = list()
    arr = [True] * (N+1)
    for i in range(2, N+1):
        if(arr[i]):
            pointer = i*i
            while(pointer <= N):
                arr[pointer] = False
                pointer += i
        arr.append(i)
    return (list(enumerate(arr)))

size = int(input())
segment_size = int(math.sqrt(size))
primes1 = primes(range(1, segment_size))
for i in range(segment_size+1, N+1, segment_size):
    primes1 = test(primes1, i, i+)

# O(n*log(log(n)))