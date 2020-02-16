given = [int(i) for i in str(input()).split(" ")]
k = -1
for i in range(len(given)-1):
    if(given[i] > given[i+1]):
        k = i
k  +=1
print((len(given) - k)% len(given))

