#!/usr/bin/python3
def element_at(my_list, idx):
    length = len(my_list)
    if length <= idx or idx < 0:
        return (None)
    else:
        return (my_list[idx])
