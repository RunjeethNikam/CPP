# -*- coding: utf-8 -*-
"""
Created on Sat Aug 10 10:46:46 2019

@author: Home
"""



def maxSubArraySum(a):
    max_so_far =a[0]; 
    curr_max = a[0];
      
    for i in range(1,size):
        curr_max = max(a[i], curr_max + a[i]) 
        max_so_far = max(max_so_far,curr_max)
    return max_so_far;



#print("maximum contiguous is sum is ", maxSubArraySum(given))
test = int(input())
while test>0:
    size = int(input())
    given = [ float(i) for i in str(input()).split(" ")]
    print(maxSubArraySum(given));
    test -= 1;
