def pos_neg(a, b, negative):
    if a <= -1 and b >= 1 and negative == False:
        return True
    elif a >= 1 and b <= -1 and negative == False:
        return True
    elif a <= -1 and b <= -1 and negative == True:
        return True
    return False
