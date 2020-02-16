for _ in range(int(input())):
    size = int(input())
    if(size%3 == 0):
        print(str("5")*size)
        continue
    if(size%3 == 1):
        if(size > 10):
            print("5"*(size-10) + "3"*10)
            continue
    if(size%3 == 2):
        if(size > 5):
            print("5"*(size-5) + "3"*5)
            continue
    if(size%5 == 0):
        print("3"*size)
        continue
    else:
        print("-1")
