def round_sum(a, b, c):
    lst = []
    if a % 10 >= 5:
        lst.append(a + (10 - a % 10))
    else:
        lst.append(a - (a % 10))
    if b % 10 >= 5:
        lst.append(b + (10 - b % 10))
    else:
        lst.append(b - (b % 10))
    if c % 10 >= 5:
        lst.append(c + (10 - c % 10))
    else:
        lst.append(c - (c % 10))
    return sum(lst)