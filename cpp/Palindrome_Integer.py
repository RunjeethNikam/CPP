given = int(input())
flag = True
if(given<0):
    print("False")
    flag = False
else:
    given = str(given)
    for i in range(len(given)//2):
        if(given[i] != given[len(given) - 1 - i]):
            print(False)
            flag = False
if(flag):
    print(True)