N, M = [int(i) for i in str(input()).split(" ")]
low = (N +2)
high = (3*N)
for _ in range(M):
    x = int(input())
    if(low <= x <= high):
        print(min(abs(low-x), abs(high-x))+1)
    else:
        print(0)