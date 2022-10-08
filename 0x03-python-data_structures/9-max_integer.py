#!/usr/bin/python3

def max_integer(my_list=[]):
    if len(my_list) == 0:
        return None

    list_len = len(my_list)

    for i in range(list_len):
        for j in range(list_len - 1):
            if my_list[j] > my_list[j + 1]:
                temp = my_list[j]
                my_list[j] = my_list[j + 1]
                my_list[j + 1] = temp

    return my_list[list_len - 1]
