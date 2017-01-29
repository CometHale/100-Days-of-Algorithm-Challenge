#!/bin/python

import sys


time = raw_input().strip()
hour = int(time[0:2])
am_pm = time[8:10]

if hour == 12:
    if am_pm == "AM":
        hour = "00"    
else:
    if hour < 10:
        if am_pm == "PM":
            hour += 12
        else:
            hour = "0" + str(hour)
    else:
        if am_pm == "PM":
            hour += 12
    
print str(hour) + ":" + time[3:8]
