from heapq import merge
import math
given = int(input())
factors1 = []
factors2 = []
for i in range(1, int(math.sqrt(given)) +1):
    if given%i == 0:
        factors1.append(i)
        if(i != (math.sqrt(given))):
            factors2.append(given//i)
factors2.reverse()
rev = list(merge(factors1, factors2))
print(rev)