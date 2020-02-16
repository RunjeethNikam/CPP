given = str(input())
Dict = dict(zip("ABCDEFGHIJKLMNOPQRSTUVWXYZ", range(1,27)))
power = 0
sum = 0
print(Dict)
print(list(enumerate(given[::-1])))
# for i in given[::-1]:
#     sum += Dict[i]*(26**power)
#     power += 1
# print(sum)