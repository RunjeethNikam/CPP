for _ in range(int(input())):
    L, R = list(map(int, input().split()))
    length = (R - L +1)
    if(length == 1):
            if(L&1):
                print("Odd")
                continue
            else:
                print("Even")
                continue
    if(length&1):
        # odd
        numberOfodd = 0
        if(L&1):
            numberOfodd = length//2 +1
        else:
            numberOfodd = length//2
        if(numberOfodd&1):
            print("Odd")
            continue
        else:
            print("Even")
    else:
        # even
        numberOfodd = length//2
        if(numberOfodd&1):
            print("Odd")
            continue
        else:
            print("Even")
            continue
