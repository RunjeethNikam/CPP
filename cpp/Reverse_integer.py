import sys

given = int(input())
if(given<0):
    given  = str(given)
    given = given[:0:-1]
    given = int(given)
else:
    given  = str(given)
    given = given[::-1]
    given = int(given)

if(0< given <= (1<<31)-1):
    print(given)
elif((-1<<31) <= given < 0):
    print(given)
else:
    print(0)