"""
6 kyu - Replace With Alphabet Position

Welcome.
In this kata you are required to, given a string, replace every letter with its position in the alphabet.
If anything in the text isn't a letter, ignore it and don't return it.

"a" = 1, "b" = 2, etc.
"""

def alphabet_position(text):
    # ord("a") = 97; ord("z") = 122; ord("A") = 65; ord("Z") = 90
    lista = []
    for x in text:
        if 97 <= ord(x) <= 122:
            lista.append(ord(x) - 96)
        elif 65 <= ord(x) <= 90:
            lista.append(ord(x) - 64)
        else:
            continue
    return_string = ""
    for y in range(len(lista)):
        return_string += str(lista[y])
        if y != len(lista) - 1:
            return_string += " "
    return return_string