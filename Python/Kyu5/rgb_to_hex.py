"""
5 kyu - RGB To Hex Conversion

The rgb function is incomplete. Complete it so that passing in RGB decimal values will result in a hexadecimal
representation being returned. Valid decimal values for RGB are 0 - 255. Any values that fall out of that range
must be rounded to the closest valid value.

Note: Your answer should always be 6 characters long, the shorthand with 3 will not work here.
"""

def rgb(r, g, b):
    #checks if the values are within the allowed range ([0,255]).
    #normalizes them, if not.
    def normalize(a):
        if a < 0: return 0
        elif a > 255: return 255
        else: return a

    #checks if the string has the indeded length of 2.
    #adds 1 zero, if not.
    def len_checker(a:str):
        if len(a) == 1: return "0"+a
        else: return a

    r = len_checker(hex(normalize(r))[2:])
    g = len_checker(hex(normalize(g))[2:])
    b = len_checker(hex(normalize(b))[2:])

    hex_tup = (r,g,b)

    return_str = "".join(hex_tup)

    return return_str.upper()