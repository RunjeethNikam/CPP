import heapq
arr = [1,-1,-1,-1,1,1,-1,-1,1,1]
n = len(arr)
hp = []
start = -1
end = -1
maxi = 0
curr = 0
k = 
cnt = 0
 
 
for i in range(n):
    if arr[i] >= 0:
        curr += arr[i]
        end = i
        if start < 0:
            start = i
    else:
        while k > 0 and cnt >= k and hp[0][0] < abs(arr[i]):
            x = heapq.heappop(hp)
            if x[1] >= start:
                if x[1] == start:
                    start += 1
                    curr -= x[0]
                    cnt -= 1
                else:
                    if curr - 2*x[0] < 0:
                        curr = 0
                        hp = []
                        cnt = 0
                        start = i
                        end = i
                    else:
                        curr -= 2*x[0]
                        cnt -= 1
        if cnt >= k:
            curr += arr[i]
            if curr < 0:
                curr = 0
                hp = []
                cnt = 0
                start = -1
                end = -1
        else:
            curr += abs(arr[i])
            heapq.heappush(hp, (abs(arr[i]), i))
            cnt += 1
    if curr > maxi:
        maxi = curr
 
 
print (int(maxi))