size = int(input())
Ai = list(map(int, input().split(" ")))
Bi = list(map(int, input().split(" ")))
Ci = list(map(int, input().split(" ")))
sm = 0

for i in range(size):
    AorB = Ai[i] ^ Bi[i]
    D = Ci[i]
    count = 0
    for z in bin(D)[2:]:
        if (z== "1"):
            count += 1
    for  j in range(30, -1, -1):
        element = D & (1<<j)
        if(element):
            correspoinding = AorB & (1<<j)
            if(correspoinding and count > 1):
                D = D^(1<<j)
                count -= 1
    sm += (AorB ^(Ci[i] & D))  
print(sm)