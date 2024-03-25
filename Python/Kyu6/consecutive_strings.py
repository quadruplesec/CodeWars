"""
6 kyu - Consecutive strings

You are given an array(list) strarr of strings and an integer k.
Your task is to return the first longest string consisting of k consecutive strings taken in the array.
"""

def longest_consec(strarr, k):
    if (len(strarr) == 0) or (k > len(strarr)) or (k <= 0):
        return ""
    
    nu_list = []

    for x in range(len(strarr)-k + 1):
        nu_list.append(strarr[x:k])
        k = k+1

    man_string = ""

    for x in range(len(nu_list)):
        for y in range(len(nu_list[x])):
            man_string += nu_list[x][y]
        nu_list[x] = man_string
        man_string = ""

    aux_list = []
    for x in range(len(nu_list)):
        aux_list.append(len(nu_list[x]))

    ind = aux_list.index(max(aux_list))
    return nu_list[ind]