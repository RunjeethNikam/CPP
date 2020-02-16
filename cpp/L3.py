given = [int(i) for i in str(input()).split()]
maxElement = max(given)
num = [0] * (maxElement+1)
for index, element in enumerate(given):
    num[element] += 1
    if(num[element] >= 2):
        print("0")
i = 0
mn = 10000
while(i<len(num)):
    if(num[i] != 0):
        start = i+1
        while(start<len(num) and num[start] == 0):
            start += 1
        if(start != len(num)):
            mn = min(mn, abs(i - start))
        i = start
    else:
        i += 1
print(mn)