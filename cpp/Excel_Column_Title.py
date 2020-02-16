given = int(input())
result = []
Dict = dict(zip(range(1, 27), "ABCDEFGHIJKLMNOPQRSTUVWXYZ"))
while(given != 0):
    remainder = given % 26
    product = given // 26
    given = product
    if(remainder == 0):
        remainder += 26
        given -= 1
        product -= 1
    result.append(remainder)
out = ""
for i in result[::-1]:
    out += Dict[i]
print(out)