for _ in range(int(input())):
    N, M, K, L, R = list(map(int, input().split()))
    given = []
    result = 10**6 +1
    for _ in range(N):
        Ci, Pi = list(map(int, input().split()))
        given.append([Ci, Pi])
    for can in given:
        Ci, Pi = can
        if(Ci == K):
            pass
        elif(Ci > K):
            Ci -= M
            Ci = max(Ci, K)
        elif(Ci < K):
            Ci += M
            Ci = min(Ci, K)
        if(L <= Ci <= R):
            result = min(result, Pi)
    if(result == 10**6+1):
        print("-1")
    else:
        print(result)
