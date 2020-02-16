given = [int(i) for i in input().split()]
for i in range(1, len(given)):
    if(given[i-1] < given[i] and given[i] > given[i+1] or given[i-1] <= given[i] and given[i] > given[i+1] or given[i-1] < given[i] and given[i] >= given[i+1]):
        print("False")
        break

print("True")
