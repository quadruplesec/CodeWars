"""
6 kyu - Break camelCase

Complete the solution so that the function will break up camel casing, using a space between words.
"""

def solution(s):
    if len(s) == 0:
        return ""
    if s.islower() == True:
        return s
    flags = []
    counter = 0
    counter2 = 1
    if s[1:].islower() == False:
        for x in s[1:]:
            if x.islower() == False:
                if x == " ":
                    continue
                else:
                    flags.append(counter2 + counter)
                    counter += 1
            counter2 += 1
    returnstr = s
    for ind in flags:
        if returnstr[ind-1] == " " or returnstr[ind + 1] == " ":
            continue
        else:
            returnstr = returnstr[:ind] + " " + returnstr[ind:]

    return returnstr