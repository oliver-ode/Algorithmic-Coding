def end_other(a, b):
    a = a.lower()
    b = b.lower()

    if b.endswith(a):
        return True
    elif a.endswith(b):
        return True
    else:
        return False
