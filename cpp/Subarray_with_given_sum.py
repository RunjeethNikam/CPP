# for _ in range(int(input())):
#     size, sm = [int(i) for i in str(input()).split(" ")]
#     given = [int(i) for i in str(input()).split(" ")
#     ]
#     preSum = []
#     preSum.append(0)
#     Dict = {}
#     for i in given:
#         preSum.append(preSum[-1] + i)
#     flag = True
#     for index, element in enumerate(preSum):
#         if(element>= sm):
#             if(sm == i):
#                 print(1, index)
#                 flag = False
#                 break
#             if(Dict.get(element-sm) != None):
#                 flag = False
#                 print(Dict[element-sm]+1, index)
#                 break
#         Dict[element] = index
#     if(flag):
#         print("-1")


for _ in range(int(input())):
    size, sm = map(int,input().split())
    given = list(map(int, input().split()))
    preSum = []
    preSum.append(0)
    Dict = {}
    for i in given:
        preSum.append(preSum[-1] + i)
    flag = True
    for index, element in enumerate(preSum):
        if(Dict.get(element) == None):
            Dict[element] = index
        if(element>= sm):
            if(sm == element):
                print(1, index)
                flag = False
                break
            if(Dict.get(element-sm) != None):
                flag = False
                print(Dict[element-sm]+1, index)
                break
        
    if(flag):
        print("-1")
