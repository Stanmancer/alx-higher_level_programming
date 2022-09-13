#!/usr/bin/python3

if __name__ == '__main__':
    import sys

    _len = len(sys.argv)
    _sum = 0

    for i in range(1, _len):
        _sum += int(sys.argv[i])

    print(_sum)
