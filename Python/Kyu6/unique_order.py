"""
6 kyu - Unique In Order

Implement the function unique_in_order which takes as argument a sequence and returns a list of items
without any elements with the same value next to each other and preserving the original order of elements.
"""

def unique_in_order(sequence):
    if len(sequence) == 1:
        return list(sequence)
    if len(sequence) == 0:
        return []
    if type(sequence) != list:
        sequence = list(sequence)
    index_list = []
    for x in range(1, len(sequence)):
        if sequence[x-1] == sequence[x]:
            index_list.append(x)
    
    adjuster = 0
    for x in index_list:
        sequence.pop(x - adjuster)
        adjuster += 1

    return sequence