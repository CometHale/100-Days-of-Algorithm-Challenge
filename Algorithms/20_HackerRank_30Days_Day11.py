#!/bin/python

import sys


arr = []
max_hourglass = -10000 #some 6x6 arrays may have all negative values
cur_hourglass = 0
end_left = 0
mid = 1
end_right = 2


for arr_i in xrange(6):
   arr_temp = map(int,raw_input().strip().split(' '))
   arr.append(arr_temp)

for i,row in enumerate(arr):
    for pos in range(0,4):
        if i + 1 <= 5:
            n_row = arr[i+1]
        if i + 2 <= 5:
            nn_row = arr[i+2]
        
        if n_row == nn_row:
            break

        cur_hourglass = row[end_left] + row[mid] + row[end_right] + n_row[mid] \
        + nn_row[end_left] + nn_row[mid] + nn_row[end_right]
        if cur_hourglass > max_hourglass:
            max_hourglass = cur_hourglass

        if_test = end_left
        if if_test + 1 <= 3: #the leftmost position can never be more than 3
            end_left += 1
        else:
            end_left = 0 # can't be less than 0

        if_test = mid
        if if_test + 1 <= 4: #the middle position on either end can never be more than 4
            mid += 1 
        else:
            mid = 1 #can't be less than 1

        if_test = end_right   
        if if_test + 1 <= 5: # can't be more than 5
            end_right += 1
        else:
            end_right = 2 #can't be less than 2
       
        cur_hourglass = 0
    
print max_hourglass        