import bisect
for _ in range(int(input())):
    Hi_size, beams = map(int, input().split(" "))
    given = [int(i) for i in input().split(" ")]
    beam = dict()
    given = [0] + given
    differenceArray = [0]*(len(given) + 1)
    differenceArray[1] = given[1]
    for index, array in enumerate(given):
        if(index>1):
            differenceArray[index] = given[index] - given[index-1]
    
    for _ in range(beams):
        start, end, no = map(int, input().split(" "))
        x = beam.get(start)
        if(x != None):
            pos = bisect.bisect(x, [end, no])
            x.insert(pos, [end, no])
        else:
            beam[start] = [[end, no],]
    count = 0
    for i in range(1, len(given)):
        it = beam.get(i)
        if(it != None):
            if(given[i] <= it[-1][1]):
                differenceArray[i] -= given[i]
                differenceArray[it[-1][0] + 1] += given[i]
                it[-1][1] -= given[i]
                given[i] = 0
                it.pop()
                count += 1
            else:
                while(len(it) != 0 or given[i] == 0):
                    given[i] -= it[-1][1]
                    differenceArray[i] -= it[-1][1]
                    differenceArray[it[-1][0]+1] += it[-1][1]
                    count += it[-1][1]
                    it[-1][1] =0
                    it.pop()
    for i in range(2, len(differenceArray)-1):
        given[i] = differenceArray[i] + given[i-1]
    print(given)