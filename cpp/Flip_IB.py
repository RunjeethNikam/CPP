def flip(A):
    max_diff = 0;
    diff = 0;
    start = 0;
    ans = None;
    for i, a in enumerate(A):
        diff += (1 if a is '0' else -1)
        print(diff, max_diff, i, a)
        if diff < 0:
            diff = 0
            start = i+1
            continue
        if diff > max_diff:
            print("asdfa")
            max_diff = diff
            ans = [start, i]
    if ans is None:
        return []
    return list(map(lambda x: x+1, ans))

given = str(input())
f = flip(given)
print(f)