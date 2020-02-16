# O(N**2) algorithmns

for _ in range(int(input())):
    size = int(input())
    given = []
    counta = 0
    countb = 0
    for i in range(size):
        count1 = 0
        count2 = 0
        g1 = []
        for index, element in enumerate(input()):
            if(element == '1'):
                if(index+1<= size//2):
                    count1 += 1
                else:
                    count2 += 1
            g1.append(int(element))
        counta = counta + count1
        countb = countb + count2
        given.append([g1, [count1, count2]])
    # print(given, counta, countb)
    result = abs(counta - countb)
    if(result == 0):
        print(result)
        continue
    for i in given:
        result = min(result, abs((-i[1][0] + i[1][1])- (-i[1][1]+i[1][0])))
    print(result)

                