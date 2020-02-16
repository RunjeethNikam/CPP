import math
def build(given, tree, low, high, pos):
    if(low == high):
        tree[pos][0] = given[low]
        tree[pos][1] = 0
        return tree[pos]
    mid = low + (high-low)//2
    left = build(given, tree, low, mid, 2*pos + 1)
    right = build(given, tree, mid+1, high, 2*pos + 2)
    tree[pos][0] = math.gcd(left[0], right[0])
    if(left[1] == right[1] == 0):
        tree[pos][1] = math.gcd(left[0], right[0])
    elif(left[1] == 0):
        tree[pos][1] = right[1]
    elif(right[1] == 0):
        tree[pos][1] = left[1]
    else:
        tree[pos][1] = left[1] + right[1]
    return tree[pos]
def query(given, tree, qlow, qhigh, low, high, pos):
    pass
    if(qlow > high or qhigh <low):
        return 0
    if(qlow <= low and qhigh >= high):
        return tree[pos]
    mid = low + (high - low)//2
    return []

N,M = map(int, input().split())
tree = [[0 for i in range(2)] for j in range(4*N)]
given = list(map(int, input().split()))
build(given, tree, 0, N-1, 0)
print(tree)