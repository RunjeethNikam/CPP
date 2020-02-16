import bisect
def solve(arr, size,Left,Right):
    i = bisect.bisect_left(arr, Left)
    if(i>= size):
        print("NO")
        return
    if(arr[i] + 2 <= Right-1):
        print("YES")
    else:
        print("NO")




for i in range(int(input())):
    N,Q = map(int, input().split())
    s = [i for i in input()]
    ss = []
    for i in range(0, len(s)-2):
        if(s[i] == s[i+1] or s[i] == s[i+2] or s[i+1] == s[i+2]):
            ss.append(i)
    size = len(ss)
    for i in range(Q):
        L, R = map(int, input().split())
        solve(ss, size, L,R)
