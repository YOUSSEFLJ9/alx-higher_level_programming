#!/usr/bin/python3
def print_reversed_list_integer(my_list=[]):
    if isinstance(my_list, list):
        last = -1
        for i in range(len(my_list)):
            print("{:d}".format(my_list[last]))
            last -= 1
