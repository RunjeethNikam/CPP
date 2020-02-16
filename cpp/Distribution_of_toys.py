for _ in range(int(input())):
    N = int(input())
    half = N//3
    count = 0
    for i in range(half, 0, -1):
        remaining = N-i
        # half -= 1
        if(remaining/2 == i):
            count += 1
            continue
        if(remaining&1):
            # odd
            pass
        else:
            count += 3
    # print(count)
    N -= 1
    result = (N-1)*N//2
    result -= count
    print(result)