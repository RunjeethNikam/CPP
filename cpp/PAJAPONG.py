for _ in range(int(input())):
    X, Y,K = map(int, input().split())
    sum = X+Y;
    div = sum//K;
    if(div==0):
        print("Chef")
    elif(div&1):
        print("Paja")
    else:
        print("Chef")