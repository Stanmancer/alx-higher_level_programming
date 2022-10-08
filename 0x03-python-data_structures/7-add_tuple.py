#!/usr/bin/python3

def add_tuple(tuple_a=(), tuple_b=()):
    temp_a, temp_b = [], []
    for i in tuple_a:
        temp_a.append(i)
    for i in tuple_b:
        temp_b.append(i)

    if len(temp_a) < 2 or len(temp_b) < 2:
        if len(temp_a) != 0:
            temp_a.append(0)
        else:
            for i in range(2):
                temp_a.append(0)

        if len(temp_b) != 0:
            temp_b.append(0)
        else:
            for i in range(2):
                temp_b.append(0)

        new_tuple = (temp_a[0] + temp_b[0]), (temp_a[1] + temp_b[1])

    else:
        new_tuple = ((tuple_a[0] + tuple_b[0]), (tuple_a[1] + tuple_b[1]))

    return new_tuple
