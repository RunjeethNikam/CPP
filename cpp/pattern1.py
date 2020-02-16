# size = int(input())
# for i in range(size):
#     for j in range(1, i+1):
#         print(j, end = '')
#     print()

# size = int(input())
# for i in range(1,size+1):
#     for j in range(1, size - i+1):
#         print(" ", end = "")
#     for j in range(1, i+1):
#         print(j, end = "")
#     print()

# size = int(input())
# for i in range(1, size + 1):
#     for j in range(1, size-i+1):
#         print(" ", end = " ")
#     for j in range(1, i+1):
#         print(j, end = " ")
#     for j in range(i-1, 0, -1):
#         print(j,end = " ")
#     print()


# import calendar
# year = int(input("enter the year -> "))
# i = 1;
# cal = calendar.TextCalendar(calendar.SUNDAY)
# while(i <= 12):
#     cal.prmonth(year,i)
#     i+=1

var = 12
def hi():
    global var
    var = 21
    print(var)
hi()
print(var)