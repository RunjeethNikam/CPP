given = list(map(int, str(input()).split(" ")))
size = len(given)
for i in range(size//2):
    given[i], given[size-i-1] = given[size-i-1], given[i]
carry = 1
i = 0
while(carry != 0 or i<size):
    if(given[i] == 9):
        given[i] = 0
    else:
        given[i] += carry
        carry = 0
    i += 1
if(carry == 1):
    given.append(1)
for i in range(size//2):
    given[i], given[size-i-1] = given[size-i-1], given[i]
print(given)
