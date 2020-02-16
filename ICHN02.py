nodes = int(input())
root = input()
links = input().split(',')
doc = dict()
for i in links:
    lis = i.split('->')
    doc[lis[0]] = list()
    for i in range(1, len(lis)):
        doc[lis[0]].append(lis[i])
pattern = input()
flag = True
for i in range(len(pattern)-1):
    if(pattern[i+1] in doc[pattern[i]]):
        continue
    else:
        flag = False
        break
if(flag):
    print("1")
else:
    print("0")
