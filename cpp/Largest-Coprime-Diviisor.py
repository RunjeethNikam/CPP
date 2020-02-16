import math
A, B = list(map(int, input().split()))
gcd = int(math.gcd(A,B))
while(gcd != 1):
    A //= gcd
    gcd = int(math.gcd(A,B))
print(A)
