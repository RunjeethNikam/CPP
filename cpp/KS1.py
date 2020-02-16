t = int(input())
for _ in range(t):
    size = int(input())
    given = [0]
    [given.append(int(i)) for i in str(input()).split(" ")]
    s = 0
    ans = 0
    count = [0] * (10**6 +1)
    sum = [0] * (10**6 + 1)
    for index, element in enumerate(given):
        s ^= element;
        ans += count[s]*index - sum[s]
        count[s] += 1
        sum[s] += (index+1)
    print(ans)