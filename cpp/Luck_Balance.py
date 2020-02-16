n, k = map(int, input().split(" "))
res = 0
imp_contest = []
for i in range(n):
    a,b = map(int, input().split(" "))
    if b == 0:
        res += a
    else:
        imp_contest.append(a)
imp_contest.sort(reverse = True)
res += sum(imp_contest[:min(k, len(imp_contest))])
res -= sum(imp_contest[k:])
print(res)