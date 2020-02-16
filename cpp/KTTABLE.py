for _ in range(int(input())):
    size = int(input())
    timeTable = [int(i) for i in str(input()).split(" ")]
    required = [int(i) for i in str(input()).split(" ")]
    start = 0
    count = 0
    for index, element in enumerate(timeTable):
        time = element - start
        if(time >= required[index]):
            count += 1
        start = element
    print(count)