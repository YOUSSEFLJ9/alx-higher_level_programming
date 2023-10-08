#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    my_list1 = []
    for i in range(len(my_list)):
        if my_list[i] == 0:
            my_list1.append(True)
        else:
            if abs(my_list[i]) % 2 == 0:
                my_list1.append(True)
            else:
                my_list1.append(False)
    return (my_list1)
