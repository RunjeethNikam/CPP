# https://www.hackerearth.com/challenges/competitive/august-circuits-19/algorithm/attack-of-the-mind-flayer-3-119b5d47/

for _ in range(int(input())):
    N, M = map(int, input().split())
    Hi =[0] + list(map(int, input().split()))
    Bi =[0] + list(map(int, input().split()))
    boo = [True]*(len(Hi))
    for index, element in enumerate(Bi):
        if(index >0):
            for index1 in range(index, len(Hi), index):
                if(boo[index1]):
                    element1 = Hi[index1]
                    if(element1 <= element):
                        Hi[index1] = index
                        boo[index1] = False

    for i in range(1, len(Hi)):
        if(boo[i]):
            Hi[i] = -1

    for index, element in enumerate(Hi):
        if(index>0):
            print(element)
