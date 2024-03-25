"""
6 kyu - CamelCase Method

Write a method (or function, depending on the language) that converts a string to camelCase,
that is, all words must have their first letter capitalized and spaces must be removed.
"""

def camel_case(s):
    if len(s.split()) > 1:
        lista = s.split()
        string = ""
        for x in lista:
            string += x.capitalize()
        return string
    else:
        return s.capitalize()
    
