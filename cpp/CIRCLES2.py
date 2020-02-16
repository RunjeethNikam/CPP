import math
def line(X1, Y1, X2, Y2):
    a = Y2-Y1
    b = X1-X2
    c = a*X1 + b*Y1
    return [a,b,c]
for _ in range(int(input())):
    X1, Y1, R1, X2, Y2, R2 = map(int, input().split())
    # if(abs(R1 - R2) <= math.sqrt((X1-X2)**2 + (Y1-Y2)**2) <= (R1+R2)):
    if(max(R1, R2) <=math.hypot(X1-X2, Y1-Y2)):
        # one circle does not lies inside the other circle
        a,b,c = line(X1, Y1, X2, X2)
        # print(a,b,c)
        d0 = abs(c)/math.sqrt(a**2 + b**2)
        xo = -((a*c)/(a**2 + b**2))
        yo = -((b*c)/(a**2 + b**2))
        d = math.sqrt(R1**2 - ((c**2)/(a**2 + b**2)))
        m  = math.sqrt((d**2)/(a**2 + b**2))
        print(m)
        ax = xo + b*m
        ay = yo - a*m
        bx = xo - b*m
        by = yo + a*m
        print(ax, ay)
        print(bx, by)
    else:
        # one circle does lies inside the other circle
        print("NO")
    
    