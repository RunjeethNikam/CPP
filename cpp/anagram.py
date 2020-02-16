# for i in range(int(input())):
#     A1, A2 = [str(i) for i in str(input()).split(" ")]
#     xor = 0
#     if(len(A1) != len(A2)):
#         print("NO")
#         continue
#     for i in A1:
#         xor ^= ord(i)
#     for i in A2:
#         xor ^= ord(i)
#     if(xor == 0):
#         print("YES")
#     else:
#         print("NO")