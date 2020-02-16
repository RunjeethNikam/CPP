try:
    primes = ["1"]
    for i in range(2, 31):
        primes.append(primes[0]*i)
    # print(primes)
    # n = map(int, input().split())
    for _ in range(int(input())):
        given = int(input())
        if(given == 1):
            print("2")
            continue
        x = bin(given)[2:]
        if x in primes:
            # pass
            print(int("1"*(len(x) - 1),2))
        else:
            print("-1")
except:
    pass


# s_set = set()
# for i in range(1, 10000000000):
#     s_set.add(bin(i^(i+1))[2:])
# print(s_set)