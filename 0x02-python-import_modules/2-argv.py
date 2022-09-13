#!/usr/bin/python3

import sys

argv = sys.argv
len = len(argv)

print(len - 1, end='')

if len == 1:
    print(" argument:")
else:
    print(" arguments:")

for i in range(1, len):
    print("{}: {}".format(i, argv[i]))
