def caught_speeding(speed, is_birthday):
    bday = 0
    if is_birthday:
        bday = 5
    if speed <= 60 + bday:
        return 0
    elif speed <= 80 + bday:
        return 1
    else:
        return 2
