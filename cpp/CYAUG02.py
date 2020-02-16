size, K = map(int, input().split(" "))
given = list(map(int, input().split(" ")))
sm = sum(given)
mm = 10**6 + 1
for i in range(size-K+1):
    sm1 = sum(given[i: i+K])
    mm = min(mm, sm1)
print(sm -mm)