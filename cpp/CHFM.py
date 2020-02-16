for _ in range(int(input())):
    size = int(input())
    given = [int(i) for i in str(input()).split(" ")]
    sum = 0
    #if(sum/size == (sum-given[i])/size-1) then we have found the element we are looking for
    # futher simplification tells us that sum/size == given[i] is the condition
    for i in given:
        sum += i
    mean = sum / size
    flag = True
    # print(mean)
    for index, element in enumerate(given):
        # print(element, mean)
        if(float(element) == float(mean)):
            print(index+1)
            flag = False
            break
    if(flag):
        print("Impossible")