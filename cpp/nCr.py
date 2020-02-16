# n, k = map(int, str(input()).split(" "))

# def nCr(n, k):
#     if (n == k or k == 0):
#         return 1
#     nCr(n-1, k-1)+ nCr(n-1, k)
# print("Value of " + str(nCr(n, k)))



def nCr(n, k):
    C = [[0 for x in range(k+1)] for x in range(n+1)]
    for i in range(n+1):
        for j in range(min(i,k) + 1):
            if j == 0 or j == i :
                C[i][j] = 1
            else:
                C[i][j] = C[i-1][j-1] + C[i-1][j]
    return C[n][k]
print(nCr(5,2))