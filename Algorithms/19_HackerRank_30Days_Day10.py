#!/bin/python

import sys


n = int(raw_input().strip())
binary = ""
num_consec_ones = 0

for i in range(0,n):
    remainder = n % 2
    n = n / 2
    binary += str(remainder)

ones_list = binary.split("0")

for ones_sub in ones_list:
    if len(ones_sub) > num_consec_ones:
        num_consec_ones = len(ones_sub)

print num_consec_ones