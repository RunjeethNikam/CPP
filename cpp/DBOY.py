import math
for _ in range(int(input())):
    size = int(input())
    dist =[]  
    maxDist = -1;
    for i in str(input()).split(" "):
        dist.append(int(i));
        maxDist = max(maxDist, int(i))
    maxDist = 2*maxDist
    coins = [int(i) for i in str(input()).split(" ")]
    arr = [10**5] * (1+maxDist)
    arr[0] = 0
    for coin in coins:
        for i in range(coin, len(arr)):
            arr[i] =min(arr[i], arr[i-1]+1, math.ceil(i/coin))
        # print(arr, coin)
sum = 0
for i in dist:
    sum += arr[2*i]
print(sum)
