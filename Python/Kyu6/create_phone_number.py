"""
6 kyu - Create Phone Number

Write a function that accepts an array of 10 integers (between 0 and 9),
that returns a string of those numbers in the form of a phone number.
"""

def create_phone_number(n):
    nu_str = "("
    
    x = 0
    while x < 3:
        nu_str += str(n[x])
        x += 1

    nu_str += ") "
    
    while x < 6:
        nu_str += str(n[x])
        x += 1
        
    nu_str += "-"
        
    while 5 < x < 10:
        nu_str += str(n[x])
        x += 1
        
    return nu_str
        
            
        