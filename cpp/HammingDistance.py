given = [int(i) for i in str(input()).split(" ")]
x = 0;# 1's
y = 0;# 0's
count = 0
sum = 0
for i in range(32):
    for j in given:
        if(j&(1<<count)):
            x += 1
        else:
            y += 1
    sum += 2*x*y
    count += 1
    x = 0
    y = 0
print(sum)